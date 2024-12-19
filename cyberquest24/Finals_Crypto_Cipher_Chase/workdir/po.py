# pip3 install -U padding_oracle

from padding_oracle import decrypt
from base64 import b64encode, b64decode
import requests

sess = requests.Session()
url = "http://10.10.1.12:22119"
data = "6b426e696672564b6b426e696672564b255e2f03d52a6ee76c91fd5b49844620189f51392e3e0a82224de98b50fc43c2"


def oracle(ciphertext: bytes):
    response = sess.post(url, data = {"ciphertext": ciphertext.hex()})
    if response.text == "PADDING ERROR":
        return False
    elif response.text == "NO PADDING ERROR":
        return True
    else:
        print(response.status_code)
        print(response.text)
        raise RuntimeError("Unexpected behavior")


ciphertext = bytes.fromhex(data)
assert len(ciphertext) % 16 == 0

plaintext = decrypt(
    ciphertext,
    block_size=16,
    oracle=oracle,
    num_threads=16,
)

print(plaintext)

