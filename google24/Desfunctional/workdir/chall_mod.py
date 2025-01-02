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
        self.key = b"KEY"*8
        #self.iv = b"I"*8
        self.challenge = b"BEGIN_CHALLENGE" + b"X"*(64-28) + b"END_CHALLENGE" # b"C"*64

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
            print("--------- RESET FLIPS ---------")
            self.flipped_bits = set(range(0, 192, 8))
        remaining = list(set(range(192)) - self.flipped_bits)
        num_flips = random.randint(1, len(remaining))
        self.flipped_bits = self.flipped_bits.union(
            random.choices(remaining, k=num_flips))
        mask = int.to_bytes(sum(2**i for i in self.flipped_bits), 24)
        mask = int.to_bytes(0, 24)
        x = set(range(0, 192))
        mask = int.to_bytes(sum(2**i for i in x), 24)
        #print("mask", mask)
        return bytes(i ^ j for i, j in zip(self.key, mask))

    def decrypt(self, text: bytes):
        self.counter -= 1
        if self.counter < 0:
            raise Exception("Out of balance")
        key = self.corruption()
        print("key", key)
        if len(text) % 8 != 0:
            return b''
        cipher = DES3.new(key, mode=DES3.MODE_CBC, iv=self.iv)
        return cipher.decrypt(text)


if __name__ == "__main__":
    chall = Desfunctional()
    print("iv:", chall.iv.hex())
    print("key:", chall.key.hex())
    print("challenge:", chall.challenge)
    PROMPT = ("Choose an API option\n"
              "1. Get challenge\n"
              "2. Decrypt\n"
              "3. Get the flag\n")
    #signal.alarm(128)
    while True:
        try:
            option = int(input(PROMPT))
            if option == 1:
                resp = chall.get_challenge()
                print(resp)
                print(resp.hex())
            elif option == 2:
                ct = bytes.fromhex(input("(hex) ct: "))
                resp = chall.decrypt(ct)
                print(resp)
                print(resp.hex())
            elif option == 3:
                pt = bytes.fromhex(input("(hex) pt: "))
                print(chall.get_flag(pt))
                sys.exit(0)
        except Exception as e:
            print(e)
            sys.exit(1)

'''
2
aaaaaaaaaaaaaaaa
[256 for i in [1]]

XXXXXXXXCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC

0000000000000000
18c7f59bd4958fc2a98662d928758fb3b25c807073f872a65461bec902446062866175acb7d54e78d879d73d98465d771e829e2230f129f5f200b355f4b67ef4
e7380a642b6a703d56799d26d78a704c4da37f8f8c078d59ab9e4136fdbb9f9d799e8a53482ab187278628c267b9a288e17d61ddcf0ed60a0dff4caa0b49810b

2
0000000000000000e7380a642b6a703d56799d26d78a704c4da37f8f8c078d59ab9e4136fdbb9f9d799e8a53482ab187278628c267b9a288e17d61ddcf0ed60a0dff4caa0b49810b
'''