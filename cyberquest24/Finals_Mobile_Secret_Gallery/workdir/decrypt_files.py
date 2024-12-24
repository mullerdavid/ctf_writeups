from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad
from Crypto.Util import Counter

from hashlib import sha1


def aes_ctr_decrypt(key, iv, ciphertext):
    ctr = Counter.new(128, initial_value=int.from_bytes(iv, byteorder='big'))
    cipher = AES.new(key, AES.MODE_CTR, counter=ctr)
    decrypted = cipher.decrypt(ciphertext)
    return decrypted
    
f = open("flag.png", "rb")
data = f.read()

for i in range(0,10000):
    pin = str(i).rjust(4, "0")
    secret = sha1(pin.encode()).hexdigest()[:16].encode()
    with open(f"./flag_decrypt/flag-{pin}.png", "wb") as file:
        file.write(aes_ctr_decrypt(secret, data[:16], data[16:]))

