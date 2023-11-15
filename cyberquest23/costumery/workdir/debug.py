#!/usr/bin/env python3

from pwn import ELF, process, ROP, remote, ssh, gdb, cyclic, cyclic_find, log, p64, u64

LOCAL_BIN = "../files/costumery"

P = process(LOCAL_BIN, env={})
ELF_LOADED = ELF(LOCAL_BIN)
gdb.attach(P.pid, """
b *0x401552
display/i $pc
display/wx $rsp
c
""")
payload = cyclic(0x100)
print(P.clean())
P.sendline(b"1")
P.sendline(b"1")
P.sendline(b"yes")
P.sendline(payload)
print("\ncyclic_find: ", cyclic_find(0x62616166), "\n") # 120
P.interactive()