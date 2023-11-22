#include "decrypt.h"

#include <stdio.h>
#include <string.h>
#include "hardware/flash.h"
#include "hardware/watchdog.h"

#define CBC 1
#include "aes.hpp"

#include "md5.h"


#define FLASH_TARGET_OFFSET (PICO_FLASH_SIZE_BYTES - FLASH_SECTOR_SIZE)
#define FLASH_MD5_SIZE (PICO_FLASH_SIZE_BYTES / 2)

#define FLAG_SIZE 64

void reboot() {
    watchdog_reboot (0, SRAM_END, 10);
    while (true){
        sleep_ms(100);
    }
}

void decrypt() {
    register uint8_t r1_reg asm ("r1");
    uint8_t tmp = r1_reg;
    volatile uint8_t* r1;
    r1 = new uint8_t;
    *r1 = tmp;
    //copy flash sector to a buffer 
    unsigned int address = XIP_BASE + FLASH_TARGET_OFFSET;
    uint8_t buff[FLASH_SECTOR_SIZE];
    memcpy(buff, (uint8_t *)address, sizeof(buff));

    //md5sum of first 1M of flash as key
    MD5 md5_class;
    unsigned char md5[MD5::HashBytes]; 
    const void* data = (const void*)XIP_BASE;
    size_t md5_numbytes = FLASH_MD5_SIZE;
    md5_class.add(data, md5_numbytes);
    md5_class.getHash(md5);

    //decrypt block with aes, md5 as iv and key
    struct AES_ctx ctx;
    AES_init_ctx_iv(&ctx, md5, md5);
    AES_CBC_decrypt_buffer(&ctx, buff, FLASH_SECTOR_SIZE);
    
    //decrypt flag1 with hardcoded key
    for (size_t i=0;i<FLAG_SIZE;i++) {
        buff[i] = buff[i] ^ 42;
    }
    printf("Congratulation for the flag: %s !\n", buff);
    printf("There is a second one here, keep looking! Register r1 should be 69!\n");
    stdio_flush();

    //decrypt flag1 with r1 as key
    if (*r1 != 69) {
        reboot();
    }

    for (size_t i=FLAG_SIZE;i<(2*FLAG_SIZE);i++) {
        if (*r1 != 69) {
            reboot();
        }
        buff[i] = buff[i] ^ *r1;
    }

    if (*r1 != 69) {
        reboot();
    }
    delete r1;
    printf("Congratulation for the flag: %s !\n", (buff+FLAG_SIZE));
    printf("Rebooting in 5s");
    stdio_flush();
    sleep_ms(5000);
    reboot();
}