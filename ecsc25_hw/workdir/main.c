#define F_CPU 4000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

#define BAUD_RATE 115200UL
#define USART_BAUD_RATE(BAUD_RATE) (uint16_t)((float)((F_CPU) * 64 / (16 * (float)(BAUD_RATE))) + 0.5)

FUSES =
{
.BODCFG = ACTIVE_DISABLE_gc | LVL_BODLEVEL0_gc | SAMPFREQ_128Hz_gc | SLEEP_DISABLE_gc,
.BOOTSIZE = 0x0,
.CODESIZE = 0x0,
.OSCCFG = CLKSEL_OSCHF_gc,
.SYSCFG0 = CRCSEL_CRC16_gc | CRCSRC_NOCRC_gc | RSTPINCFG_GPIO_gc | UPDIPINCFG_UPDI_gc,
.SYSCFG1 = MVSYSCFG_DUAL_gc | SUT_0MS_gc,
.WDTCFG = PERIOD_OFF_gc | WINDOW_OFF_gc,
};

#define SPI_RX_RING_SIZE 128
#define SPI_TX_RING_SIZE 128
#define SPI_FRAME_MAX_SIZE 40

static volatile uint8_t spi_rx_ring[SPI_RX_RING_SIZE];
static volatile uint8_t spi_rx_head = 0;
static volatile uint8_t spi_rx_tail = 0;
static volatile uint8_t spi_rx_overflow = 0;

static volatile uint8_t spi_tx_ring[SPI_TX_RING_SIZE];
static volatile uint8_t spi_tx_head = 0;
static volatile uint8_t spi_tx_tail = 0;
static volatile uint8_t spi_tx_overflow = 0;

static uint8_t spi_frame_buf[SPI_FRAME_MAX_SIZE];
static uint8_t spi_frame_len = 0;
static uint8_t spi_frame_expected = 0;
static uint16_t spi_nonce = 0;

static uint8_t spi_reply_set_nonce[4] = { 0x23, 0x02, 0x00, 0x20 }; // https://crccalc.com/?crc=01%2000&method=CRC-16&datatype=hex&outtype=hex CRC-16/MODBUS
static uint8_t spi_reply_get_stream[36] = { 0x23, 0x22,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x94 };


typedef enum {
    SPI_PARSE_WAIT_SOF = 0,
    SPI_PARSE_WAIT_LEN,
    SPI_PARSE_WAIT_BODY
} spi_parse_state_t;

static spi_parse_state_t spi_parse_state = SPI_PARSE_WAIT_SOF;

static void USART0_putc(char c) {
    while (!(USART0.STATUS & USART_DREIF_bm)) { }
    USART0.TXDATAL = (uint8_t)c;
}

static void USART0_puts(const char *s) {
    while (*s) {
        USART0_putc(*s++);
    }
}

static void USART0_print_hex8(uint8_t v) {
    static const char hex[] = "0123456789ABCDEF";
    USART0_putc(hex[(v >> 4) & 0x0F]);
    USART0_putc(hex[v & 0x0F]);
}

static void USART0_print_buf(const uint8_t *buf, uint8_t len) {
    for (uint8_t i = 0; i < len; i++) {
        if (i) USART0_putc(' ');
        USART0_print_hex8(buf[i]);
    }
}

static void USART0_Init(void)
{
    PORTMUX.USARTROUTEA = PORTMUX_USART0_ALT3_gc;
    PORTD.DIRSET = PIN4_bm;

    USART0.BAUD  = USART_BAUD_RATE(BAUD_RATE);
    USART0.CTRLB |= USART_TXEN_bm;
}

static void SPI0_Init(void) {
    PORTA.DIRCLR = PIN4_bm | PIN6_bm | PIN7_bm;
    PORTA.DIRSET = PIN5_bm;
    PORTA.PIN7CTRL = PORT_PULLUPEN_bm;

    SPI0.CTRLA = SPI_ENABLE_bm;
    SPI0.CTRLB = 0;
    SPI0.INTCTRL = SPI_IE_bm;
    SPI0.DATA = 0x00;
}

static inline uint8_t spi_rx_available(void) {
    return (spi_rx_head != spi_rx_tail);
}

static inline uint8_t spi_rx_pop(void) {
    uint8_t v = spi_rx_ring[spi_rx_tail];
    spi_rx_tail = (uint8_t)(spi_rx_tail + 1U);
    return v;
}

static inline uint8_t spi_tx_available(void) {
    return (spi_tx_head != spi_tx_tail);
}

static inline uint8_t spi_tx_pop(void) {
    uint8_t v = spi_tx_ring[spi_tx_tail];
    spi_tx_tail = (uint8_t)(spi_tx_tail + 1U);
    return v;
}

static inline uint8_t spi_tx_push(uint8_t v) {
    uint8_t next = (uint8_t)(spi_tx_head + 1U);
    if (next == spi_tx_tail) {
        spi_tx_overflow = 1;
        return 0;
    }
    spi_tx_ring[spi_tx_head] = v;
    spi_tx_head = next;
    return 1;
}

static void SPI0_ClearTx(void) {
    uint8_t s = SREG;
    cli();
    spi_tx_head = 0;
    spi_tx_tail = 0;
    SPI0.DATA = 0x00;
    SREG = s;
}

static uint8_t SPI0_QueueTxBytesPrimed(const uint8_t *data, uint8_t len) {
    uint8_t s = SREG;
    uint8_t queued = 0;
    uint8_t tx_empty;

    if (len == 0) {
        return 0;
    }

    cli();

    tx_empty = (spi_tx_head == spi_tx_tail);

    if (tx_empty) {
        SPI0.DATA = data[0];
        queued = 1;
    }

    for (uint8_t i = queued; i < len; i++) {
        if (!spi_tx_push(data[i])) {
            break;
        }
        queued++;
    }

    SREG = s;
    return queued;
}

static void SPI0_ResetParser(void) {
    spi_parse_state = SPI_PARSE_WAIT_SOF;
    spi_frame_len = 0;
    spi_frame_expected = 0;
}

static void SPI0_HandleFrame(void) {
    USART0_puts("frame: ");
    USART0_print_buf(spi_frame_buf, spi_frame_len);
    USART0_puts("\r\n");

    if (spi_frame_len == 7 &&
        spi_frame_buf[0] == 0x40 &&
        spi_frame_buf[1] == 0x05 &&
        spi_frame_buf[2] == 'N') {

        spi_nonce = (uint16_t)spi_frame_buf[3] | ((uint16_t)spi_frame_buf[4] << 8);

        USART0_puts("cmd=SET_NONCE nonce=0x");
        USART0_print_hex8(spi_frame_buf[4]);
        USART0_print_hex8(spi_frame_buf[3]);
        USART0_puts("\r\n");

        spi_reply_set_nonce[2] = spi_frame_buf[5];
        spi_reply_set_nonce[3] = spi_frame_buf[6];

        SPI0_ClearTx();
        SPI0_QueueTxBytesPrimed(spi_reply_set_nonce, sizeof(spi_reply_set_nonce));

        USART0_puts("tx primed: ");
        USART0_print_buf(spi_reply_set_nonce, sizeof(spi_reply_set_nonce));
        USART0_puts("\r\n");
    } else if (spi_frame_len == 3 &&
               spi_frame_buf[0] == 0x40 &&
               spi_frame_buf[1] == 0x01 &&
               spi_frame_buf[2] == 'S') {

        USART0_puts("cmd=GET_STREAM\r\n");

        SPI0_ClearTx();
        SPI0_QueueTxBytesPrimed(spi_reply_get_stream, sizeof(spi_reply_get_stream));

        USART0_puts("tx primed: ");
        USART0_print_buf(spi_reply_get_stream, sizeof(spi_reply_get_stream));
        USART0_puts("\r\n");
    } else {
        USART0_puts("cmd=UNHANDLED\r\n");
    }
}

static void SPI0_FeedByte(uint8_t b) {
    //USART0_print_hex8(b);
    //USART0_puts("\r\n");

    switch (spi_parse_state) {
        case SPI_PARSE_WAIT_SOF:
            if (b == 0x40) {
                spi_frame_buf[0] = b;
                spi_frame_len = 1;
                spi_parse_state = SPI_PARSE_WAIT_LEN;
            }
            break;

        case SPI_PARSE_WAIT_LEN:
            spi_frame_buf[1] = b;
            spi_frame_len = 2;
            spi_frame_expected = (uint8_t)(2U + b);

            if (spi_frame_expected < 3U || spi_frame_expected > SPI_FRAME_MAX_SIZE) {
                USART0_puts("bad len\r\n");
                SPI0_ResetParser();
            } else {
                spi_parse_state = SPI_PARSE_WAIT_BODY;
            }
            break;

        case SPI_PARSE_WAIT_BODY:
            if (spi_frame_len < SPI_FRAME_MAX_SIZE) {
                spi_frame_buf[spi_frame_len++] = b;
            } else {
                USART0_puts("frame overflow\r\n");
                SPI0_ResetParser();
                break;
            }

            if (spi_frame_len >= spi_frame_expected) {
                SPI0_HandleFrame();
                SPI0_ResetParser();
            }
            break;

        default:
            SPI0_ResetParser();
            break;
    }
}

ISR(SPI0_INT_vect) {
    uint8_t data = SPI0.DATA;
    uint8_t next = (uint8_t)(spi_rx_head + 1U);
    uint8_t out = 0x00;

    if (next != spi_rx_tail) {
        spi_rx_ring[spi_rx_head] = data;
        spi_rx_head = next;
    } else {
        spi_rx_overflow = 1;
    }

    if (spi_tx_available()) {
        out = spi_tx_pop();
    }

    SPI0.DATA = out;
    SPI0.INTFLAGS = SPI_IF_bm;
}

int main(void) {
    USART0_Init();
    SPI0_Init();
    SPI0_ResetParser();
    sei();

    USART0_puts("Started\r\n");

    while (1) {
        if (spi_rx_available()) {
            SPI0_FeedByte(spi_rx_pop());
        }

        if (spi_rx_overflow) {
            spi_rx_overflow = 0;
            USART0_puts("RX overflow\r\n");
        }

        if (spi_tx_overflow) {
            spi_tx_overflow = 0;
            USART0_puts("TX overflow\r\n");
        }
    }
}