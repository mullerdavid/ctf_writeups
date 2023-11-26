#!/usr/bin/env python3

from util import *
from secrets import d,n,server
from tpm import TPM
from comms import *
import utime
from machine import reset

try:
    tpm = TPM(d, n, "TPM")

    # Clear screen
    write(b"\x1b[2J")
    write(b"\x1b[H")
    write_line("Booting")
    for i in range(4):
        write(b".")
        utime.sleep_ms(300)
    write(b"\x1b[2J")
    write(b"\x1b[H")
    write_line("")
    write_line("")
    write_line("Welcome to Donnie's secure cookie service!")
    write_line("Ask nicely, and you shall receive a cookie.")
    write_line("Cookies can be exchanged for flags on")
    write_line(server)
    write_line("Have a nice day!")
    write_line("")
    write_line("Note:")
    write_line("Due to ongoing chip shortages, TPM chips that can")
    write_line("do secure RSA have become prohibitively expensive,")
    write_line("so we had to settle for a poor man's TPM instead:")
    write_line("The rules state that tampering with the chip is")
    write_line("disallowed while the TPM led is flashing.")
    write_line("Check out tpm.py for more details.")
    write_line("")

    for line in read_lines("> "):
        try:
            b = bytes.fromhex(line.decode().strip().replace(" ", ""))
            hashed = tpm.fdh(b, 1024)

            if b == b"I'd like a cookie, please!":
                write_line("That's not allowed!")
                continue

            write_line("Processing... this may take a while")
            signature = tpm.sign(hashed)
            hexsig = to_bytes(signature).hex()
            write_line("Here you go:")
            write_line(hexsig[:64])
            write_line(hexsig[64:128])
            write_line(hexsig[128:192])
            write_line(hexsig[192:])

        except Exception as e:
            write_line("Hacking attempt detected")
            write_line(repr(d))

except Exception as e:
    write_line("Hacking attempt detected")
    write_line(repr(e))
    utime.sleep(5)
    reset()
