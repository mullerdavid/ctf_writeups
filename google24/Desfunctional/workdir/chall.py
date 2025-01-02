import signal
import os
import random
import sys
from Crypto.Cipher import DES3


class Desfunctional:
    def __init__(self):
        self.key = os.urandom(24)
        self.iv = os.urandom(8)
        self.flipped_bits = set(range(0, 192, 8))
        self.challenge = os.urandom(64)
        self.counter = 128

    def get_flag(self, plain):
        if plain == self.challenge:
            with open("flag.txt", "rb") as f:
                FLAG = f.read()
            return FLAG
        raise Exception("Not quite right")

    def get_challenge(self):
        cipher = DES3.new(self.key, mode=DES3.MODE_CBC, iv=self.iv)
        return cipher.encrypt(self.challenge)

    def corruption(self):
        if len(self.flipped_bits) == 192:
            self.flipped_bits = set(range(0, 192, 8))
        remaining = list(set(range(192)) - self.flipped_bits)
        num_flips = random.randint(1, len(remaining))
        self.flipped_bits = self.flipped_bits.union(
            random.choices(remaining, k=num_flips))
        mask = int.to_bytes(sum(2**i for i in self.flipped_bits), 24)
        return bytes(i ^ j for i, j in zip(self.key, mask))

    def decrypt(self, text: bytes):
        self.counter -= 1
        if self.counter < 0:
            raise Exception("Out of balance")
        key = self.corruption()
        if len(text) % 8 != 0:
            return b''
        cipher = DES3.new(key, mode=DES3.MODE_CBC, iv=self.iv)
        return cipher.decrypt(text)


if __name__ == "__main__":
    chall = Desfunctional()
    PROMPT = ("Choose an API option\n"
              "1. Get challenge\n"
              "2. Decrypt\n"
              "3. Get the flag\n")
    signal.alarm(128)
    while True:
        try:
            option = int(input(PROMPT))
            if option == 1:
                print(chall.get_challenge().hex())
            elif option == 2:
                ct = bytes.fromhex(input("(hex) ct: "))
                print(chall.decrypt(ct).hex())
            elif option == 3:
                pt = bytes.fromhex(input("(hex) pt: "))
                print(chall.get_flag(pt))
                sys.exit(0)
        except Exception as e:
            print(e)
            sys.exit(1)
