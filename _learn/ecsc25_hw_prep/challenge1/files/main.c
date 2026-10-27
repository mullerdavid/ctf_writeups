#include <avr/io.h>
#define F_CPU 24000000UL // default clock is only 4MHz
#include <util/delay.h>
#include <string.h>
#include <stdio.h>

// #define PRINT_FLAG_ADDRESS

#ifndef PRINT_FLAG_ADDRESS
#define OBFUSCATE_FLAG
#endif

#define LED_PIN_bm PIN5_bm
#define BAUD_RATE 115200
#define USART0_BAUD_RATE(BAUD_RATE) (uint16_t)((float)((F_CPU) * 64 / (16 * (float)(BAUD_RATE))) + 0.5)


void init_24MHz_clock(void) {
	// 1. Enable external high-frequency crystal oscillator
	_PROTECTED_WRITE(CLKCTRL.XOSCHFCTRLA,
	CLKCTRL_ENABLE_bm |                    // CLKCTRL_ENABLE_bm
	CLKCTRL_FRQRANGE_24M_gc |              // 24MHz frequency range
	CLKCTRL_SELHF_XTAL_gc |                // Use crystal (not external clock)
	CLKCTRL_CSUTHF_1K_gc                   // 1K startup cycles
	);
	// 2. Wait for XOSCHF to stabilize
	while (!(CLKCTRL.MCLKSTATUS & CLKCTRL_OSCHFS_bm));
	// 3. Switch main clock to XOSCHF
	_PROTECTED_WRITE(CLKCTRL.MCLKCTRLA,
	CLKCTRL_CLKSEL_EXTCLK_gc
	);
	// 4. Wait for clock switch to complete
	while (!(CLKCTRL.MCLKSTATUS & CLKCTRL_OSCHFS_bm));
}

void init_led(void) {
	PORTF.DIRSET = PIN5_bm;
	PORTF.OUTSET = PIN5_bm;
}

void toggle_led(void) {
	PORTF.OUTTGL = PIN5_bm;
}

void init_uart(void) {
	PORTMUX.USARTROUTEA = PORTMUX_USART0_ALT3_gc;   /* USART0 routed to PORTD that is connected to CDC */
	PORTD.DIRSET = PIN4_bm;
	PORTD.DIRCLR = PIN5_bm;
	USART0.BAUD  = USART0_BAUD_RATE(BAUD_RATE);
	USART0.CTRLB |= USART_RXEN_bm | USART_TXEN_bm;
}

void uart_putchar(char c) {
	while (!(USART0.STATUS & USART_DREIF_bm));
	USART0.TXDATAL = c;
}

void uart_puts(const char* str) {
	while (*str) {
		uart_putchar(*str++);
	}
}

char uart_getchar(void) {
	while (!(USART0.STATUS & USART_RXCIF_bm));
	return USART0.RXDATAL;
}

int uart_available(void) {
	return (USART0.STATUS & USART_RXCIF_bm);
}

__attribute__((noinline)) void flag() {
#ifndef OBFUSCATE_FLAG
	const char* flag = "DB{ezflagezflag}";
	uart_puts(flag);
#else
	//const char* flag = "DB{s1mplhwch4ll}";
	const char* flag_part1 = "the_flag_value_is_not_here_dummy";
	const char* flag_part2 = "CupC#^ynEd]`4d^m";
	size_t c = 0;
	while (flag_part2[c]) {
		uart_putchar(flag_part2[c] ^ flag_part1[c] ^ flag_part1[c+16]);
		c++;
	}
#endif
	while (1) {
		toggle_led();
		_delay_ms(50);
	}
}

void echo() {
	char buff[32];
	uint8_t i = 0;
	
	memset(buff, 0, sizeof(buff));
	
	while (1) {
		char c = uart_getchar();
		buff[i] = c;
		if (c=='\r' || c=='\n') break;
		i++;
	}
	buff[i] = 0;
	
	uart_puts(buff);
	uart_puts("\r\n");
}

volatile int loop = 1;

#ifdef PRINT_FLAG_ADDRESS
void print_flag_address() {
	void (*flag_ptr)() = flag;
	char addr_str[5];
	uart_puts("flag() is at: 0x");
	sprintf(addr_str, "%04lX", (unsigned long)flag_ptr);
	uart_puts(addr_str);
	uart_puts("\r\n");
}
#endif

__attribute__((noinline)) void delay() {
	_delay_ms(10);
}

int main(void) {
	init_24MHz_clock();
	init_led();
	init_uart();
	
	_delay_ms(1000);
	
#ifdef PRINT_FLAG_ADDRESS
	print_flag_address();
#endif

	while (loop) {
		echo();
		delay();
	}
	
	flag();
}

// 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 XX XX 0a 0d
// EZ
// 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 00 a4 0a 0d
// Normal
// 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 00 ab 0a 0d
