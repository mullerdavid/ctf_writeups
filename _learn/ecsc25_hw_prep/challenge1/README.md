# Challenge

Simple buffer overflow example on AVR64DD32. The program echoes the input on the serial connection. The goal is to print the flag.

AVR uses a modified Harvard architecture, so program and data memory are separate.

# Easy mode

The address of the flag function is printed at startup.

# Hard Mode

The address is not printed.

# Setup

The [main.c](files/main.c) is the source for both. For easy challenge, uncomment the `PRINT_FLAG_ADDRESS` define.

Do NOT use the source for solving the challenge, just compile it. Use the generated firmware file instead.

The connection is using `115200` baud rate. 

# Writeup

[Writeup](WRITEUP.md)