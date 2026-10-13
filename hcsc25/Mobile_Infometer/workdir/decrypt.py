#!/usr/bin/env python3
import base64

from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad

ENCRYPTED_PATH = "encrypted_data.txt"
OUTPUT_PATH = "truth.png"

NATIVE_KEY_HEX = "d1021ba81ec433525671b984fbadb2c8"

XOR_KEY = b"th15_1s_n0t_a_r3v_t45k"


def app_h(data):
    last = data[-1]
    return data[:-last] if 1 <= last < 17 else data


def app_xor(data, key):
    return bytes(
        byte ^ key[index % len(key)]
        for index, byte in enumerate(data)
    )


def main():
    with open(ENCRYPTED_PATH, "rb") as f:
        ciphertext = base64.b64decode(f.read().strip())

    key = bytes.fromhex(NATIVE_KEY_HEX)

    cipher = AES.new(key, AES.MODE_CBC, key)
    decrypted = cipher.decrypt(ciphertext)
    decrypted = unpad(decrypted, AES.block_size)

    decrypted = app_h(decrypted)
    image_data = app_xor(decrypted, XOR_KEY)

    with open(OUTPUT_PATH, "wb") as f:
        f.write(image_data)

    print(f"Wrote {len(image_data)} bytes to {OUTPUT_PATH}")

    if image_data.startswith(b"\x89PNG\r\n\x1a\n"):
        print("Output is a PNG image.")
    else:
        print("Warning: output does not start with a PNG signature.")


if __name__ == "__main__":
    main()