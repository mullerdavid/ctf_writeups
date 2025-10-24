#!/usr/bin/env python3
import sys, argparse

p = argparse.ArgumentParser(
    description="Brute-force XOR decrypt with variable key length and crib search."
)
p.add_argument("--file", help="read ciphertext from file (otherwise stdin)")
p.add_argument("--length", type=int, default=1, help="key length in bytes (default 1)")
g = p.add_mutually_exclusive_group(required=True)
g.add_argument("--crib", help="known plaintext")
g.add_argument("--crib-start", help="known plaintext expected at start only")
a = p.parse_args()

data = open(a.file, "rb").read() if a.file else sys.stdin.buffer.read()
for k in range(256 ** a.length):
    key = k.to_bytes(a.length, "big")
    pt = bytes(b ^ key[i % a.length] for i, b in enumerate(data))
    s = pt.decode(errors="ignore")
    if (a.crib and a.crib in s) or (a.crib_start and s.startswith(a.crib_start)):
        print(f"key=0x{k:0{a.length*2}X}: {s}")