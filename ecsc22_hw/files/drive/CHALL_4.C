void unlock(int key) {
    uart_printf("Unlock function located at 0x%p\r\n", unlock);

    if(key != 42) { uart_printf("Wrong key\r\n"); return; }
    char flag[48] = {0};

    if(key != 42) { uart_printf("Wrong key\r\n"); return; }

    //[..]

    if(key != 42) { uart_printf("Wrong key\r\n"); return; }
    uart_printf("Unlocked vault: %s\r\n", flag);
}

void chall4_handler(char *input, int len) {
    char cmd[8];
    memcpy(cmd, input, len);

    if (strnstr(cmd, "VERSION", 8) != 0) {
        version();
        return;
    } else if (strnstr(cmd, "REGS", 8) != 0) {
        regs();
        return;
    } else if (strnstr(cmd, "CLOCK", 8) != 0) {
        clock();
        return;
    } else if (strnstr(cmd, "UNLOCK", 8) != 0) {
        unlock(0);
        return;
    } else if (strnstr(cmd, "HELP", 8) != 0) {
        help_chall4();
        return;
    } else {
        uart_printf("Unknown command\r\n");
    }
    return;
}
