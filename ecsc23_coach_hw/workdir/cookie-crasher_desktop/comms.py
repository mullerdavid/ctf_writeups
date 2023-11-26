import sys
import select
from utime import sleep_ms

def read_lines(prompt):
    # for each line
    while True:
        write(prompt.encode())
        line = sys.stdin.readline().encode("ascii")
        yield line

def read():
    while True:
        sys.stdin.buffer.flush()
        if select.select([sys.stdin],[],[],0)[0]:
            return sys.stdin.buffer.read(1)

def write_line(string):
    for i in string.encode() + b"\r\n":
        write(bytes([i]))
        sleep_ms(10)
    sleep_ms(100)
    #sleep_ms(500)

def write(char):
    sys.stdout.buffer.write(char)
    sys.stdout.buffer.flush()
