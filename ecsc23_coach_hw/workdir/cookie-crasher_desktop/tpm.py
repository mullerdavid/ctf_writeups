from hashlib import sha256
from utime import sleep_ms

from util import *

def tpm(func):
    def wrapper(self, *args, **kwargs):
        # Ensure TPM led is active during security operations
        self.tpm_active.value(1)
        # allow LED to settle
        sleep_ms(10)
        x = func(self, *args, **kwargs)
        self.tpm_active.value(0)
        sleep_ms(10)
        return x
    return wrapper

class TPM:
    def __init__(self, d, n, active_pin):
        self.d = d
        self.n = n
        # self.tpm_active.value = Pin(active_pin, Pin.OUT)
        self.tpm_active = lambda: None
        self.tpm_active.value = lambda x: None # print(f"LED: {x}")
        self.tpm_active.value(0)

    # construct a full domain hash
    @tpm
    def fdh(self, message, bitsize):
        bytesize = (bitsize // 8)
        output = sha256(message).digest()

        while len(output) < bytesize:
            output += sha256(output).digest()

        return to_int(output)

    @tpm
    def sign(self, x):
        return modular_pow(x, self.d, self.n)

