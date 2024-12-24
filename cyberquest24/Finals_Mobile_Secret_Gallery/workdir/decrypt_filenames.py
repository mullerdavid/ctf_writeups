import os

from base64 import b64decode

from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad
from Crypto.Util import Counter


def aes_cbc_decrypt(key, iv, ciphertext):
    cipher = AES.new(key, AES.MODE_CBC, iv=iv)
    decrypted = cipher.decrypt(ciphertext)
    decrypted = unpad(decrypted, 16)
    return decrypted
    
key = b"cyberquest".ljust(16, b"\0")
iv = b"0123456789ABCDEF".ljust(16, b"\0")
for name in os.listdir("./files"):
    ct = b64decode(name.replace("_", "/").replace("-", "+"))
    pt = aes_cbc_decrypt(key, iv, ct)
    print(f"{name} {pt}")