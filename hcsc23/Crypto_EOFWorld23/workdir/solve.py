from itertools import product
from hashlib import md5
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

CT = open("flag.bin", "rb").read()
CRIB = b"hcsc"

ITEMS = [
    bytes.fromhex("4b477b46ae3da4dad45c6a63f8d38821"), # PDF double header bytes
    bytes.fromhex("63123a782b0f2086bdac6cf5544f3f75"), # PDF FormXob
    md5(open("interesting/interesting.pdf", "rb").read()).digest(),
    md5(open("interesting/interesting_fix.pdf", "rb").read()).digest(),
    md5(open("interesting/interesting_embed_img.jpg", "rb").read()).digest(),
    md5(open("picture.png", "rb").read()).digest(),
    b"kitartas".ljust(16, b"\0"),
    b"kitartas"*2,
    "kitartás".encode("latin2").ljust(16, b"\0"),
    "kitartás".encode("latin2")*2,
    md5(b"kitartas").digest(),
    md5("kitartás".encode("latin2")).digest(),
]

# https://cryptography.io/en/latest/hazmat/primitives/symmetric-encryption/#module-cryptography.hazmat.primitives.ciphers.modes
MODES = [modes.CBC, modes.CTR, modes.OFB, modes.CFB, modes.CFB8, modes.GCM, modes.XTS, modes.ECB]

for key, iv in product(ITEMS, repeat=2):
    for M in MODES:
        mode = M() if M == modes.ECB else M(iv)
        key = key*2 if M == modes.XTS else key
        p = Cipher(algorithms.AES(key), mode).decryptor().update(CT)
        if CRIB in p.lower():
            print(M.__name__, "key", key.hex(), "iv", iv.hex(), p)