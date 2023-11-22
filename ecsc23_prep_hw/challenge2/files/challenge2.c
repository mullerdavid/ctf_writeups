void decrypt() {
	...
    
    printf("Congratulation for the flag: %s !\n", buff);
    printf("There is a second one here, keep looking! Register r1 should be 69!\n");
    stdio_flush();

    if (r1 != 69) { reboot(); }
    ...
    if (r1 != 69) { reboot(); }
    ...
    if (r1 != 69) { reboot(); }
    ...
    if (r1 != 69) { reboot(); }
    ...
    ...

    printf("Congratulation for the flag: %s !\n", buff);
    printf("Rebooting in 5s");
    stdio_flush();
    sleep_ms(5000);
    reboot();
}

void echo() {
    char buff[64];
    printf("[Debug] buff at 0x%08x.\n", buff);
    printf("Input: ");
    gets_crlf(buff); //same as gets, but terminates on any of \n or \r
    printf("Output: %s\n", buff);
    stdio_flush();
}
