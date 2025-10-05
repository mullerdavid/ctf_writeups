from pwn import *
import random

conn = remote('10.10.100.111', 41111)

wins = 0
choices = ['1', '2', '3']

while True:
    conn.recvuntil(b'Press 2 to exit the game')
    conn.sendline(b'1')
    
    conn.recvuntil(b'Enter your choice (1-3)')
    move = random.choice(choices)
    log.info(f'Sent move: {move}')
    conn.sendline(move.encode())
    
    match = conn.recvregex(rb'Current number of wins: (\d+)|Here is your flag: (.*)\n', capture=True)
    try:
        wins = int(match.group(1))
        log.info(f'Current number of wins: {wins}')
    except TypeError:
        log.success(f'Flag: {match.group(2).decode()}')
        break

conn.close()