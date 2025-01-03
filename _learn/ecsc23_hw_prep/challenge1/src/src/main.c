#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/flash.h"

#define FLASH_TARGET_OFFSET (PICO_FLASH_SIZE_BYTES - FLASH_SECTOR_SIZE)

enum Mode {
  INVALID,
  INPUT,
  AUTH,
}; 

const uint LED_PIN = 25;
const uint BTN_PIN = 24;
const uint BTN2_PIN = 14;

void init() {
    stdio_init_all();

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    gpio_init(BTN_PIN);
    gpio_set_dir(BTN_PIN, GPIO_IN);
    gpio_pull_up(BTN_PIN);

    gpio_init(BTN2_PIN);
    gpio_set_dir(BTN2_PIN, GPIO_IN);
    gpio_pull_up(BTN2_PIN);

    sleep_ms(2000);
    printf("Initialization complete!\n");
}

void decrypt(uint8_t* address) {
    uint8_t xorkey[4] = {0x08, 0xd0, 0xa6, 0x80};
    uint8_t buff[40];
    #if 0
    char a[4096] = "DB{4cc3400aa0adf4d2b38d57810e1a}";
    address = (uint8_t*)a;
    for (size_t i=0;i<sizeof(buff);i++)
    {
        size_t j = i % sizeof(xorkey);
        buff[i] = address[i] ^ xorkey[j];
        xorkey[j] = address[i];
        printf("%02x",buff[i]);
    }
    #else
    for (size_t i=0;i<sizeof(buff);i++)
    {
        size_t j = i % sizeof(xorkey);
        buff[i] = address[i] ^ xorkey[j];
        xorkey[j] = buff[i];
    }
    #endif
    printf("Congratulation for the flag: %s !\n", buff);
}



bool __attribute__ ((noinline)) is_gpio_low(uint gpio)
{
    volatile bool debug = false;
    if (debug)
    {
        printf("[Debug] Checking gpio %d for low.\n", gpio);
    }
    return !gpio_get(gpio);
}

void auth_exec() {
    printf("Attempting authentication!\n");
    sleep_ms(100);
    printf("Checking and forwarding auth result from subsystem...\n");
    sleep_ms(100);
    if (is_gpio_low(BTN_PIN) || is_gpio_low(BTN2_PIN)) {
        printf("Access Granted!\n" );
        unsigned int address = XIP_BASE + FLASH_TARGET_OFFSET;
        decrypt((uint8_t *)address);
    } else {
        printf("Access Denied!\n");
    }
}

int main() {
    init();

    enum Mode mode = INVALID;
    
    while (true) {
        if (mode != INPUT)
        {
            mode = INPUT;
            printf("Send A to authenticate!\n");
        }
        int ch;
        ch = getchar();
        if (ch == EOF)
        {
            break;
        }
        if (ch == 'A')
        {
            mode = AUTH;
            auth_exec();
        }
    }
    return 0;
}
