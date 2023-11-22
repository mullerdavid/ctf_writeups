void unlock() { 
    volatile bool success = false; 
    if (!success) { 
        console_printf("Refusing to continue\n"); 
        return; 
    } else { 
        console_printf("Requesting TPM to unlock vault\n"); 
        // Communication with TPM happens here 
        // [..] 
    } 
} 
