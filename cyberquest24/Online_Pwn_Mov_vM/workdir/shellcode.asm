section .text
  global _start
    _start:
      mov rdx, 0x0
      mov rsi, 0x0
      mov rbx, '/bin/sh' 
      mov [rsp], rbx
      mov rdi, rsp
      mov al, 59
      syscall

; nasm -f elf64 shellcode.asm -o shellcode.o && ld shellcode.o -o shellcode && ./shellcode