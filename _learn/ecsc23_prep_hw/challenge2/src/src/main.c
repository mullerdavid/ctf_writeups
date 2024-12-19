#include <stdio.h>
#include "pico/stdlib.h"

#include "decrypt.h"

void init() {
    stdio_init_all();

    sleep_ms(2000);
    printf("Initialization complete!\n");
}

void gets_crlf(char* buff) {
    int i = 0;
    while (true) {
        int ch;
        ch = getchar_timeout_us(0);
        if (ch == PICO_ERROR_TIMEOUT ) {
            break;
        }
    }
    
    while (true) {
        int ch;
        ch = getchar();
        if (ch == EOF || ch == '\n' || ch == '\r')
        {
            buff[i] = '\0';
            return;
        }
        buff[i] = ch;
        i++;
    }
}

void echo() {
    char buff[64];
    printf("[Debug] buff at 0x%08x.\n", buff);
    printf("Input: ");
    gets_crlf(buff);
    printf("Output: %s\n", buff);
    stdio_flush();
}

int main() {
    init();

    volatile uint8_t placeholder[0x100] = {0x0};

    volatile bool debug = false;
    if (debug)
    {
        decrypt();
        placeholder[0] = placeholder[debug];
    }

    printf("[Debug] main at 0x%08x.\n", main);
    printf("[Debug] echo at 0x%08x.\n", echo);
    printf("[Debug] decrypt at 0x%08x.\n", decrypt);

    printf("Echo service running.\n");
    while (true) {
        echo();
    }
    

    return 0;
}
