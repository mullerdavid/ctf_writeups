def to_bytes(m):
    from math import ceil
    return m.to_bytes(ceil((len(bin(m))-2) / 8), "big")

def to_int(m):
    return int.from_bytes(m, "big")

# micropython 1.10 doesn't have modular pow()
# this is a straightforward implementation of the right-to-left binary method
# see https://en.wikipedia.org/wiki/Modular_exponentiation#Right-to-left_binary_method
def modular_pow(base, exponent, modulus):
    if modulus == 1:
        return 0
    result = 1
    base = base % modulus
    while exponent > 0:
        if int(exponent) % 2 == 1:
            result = result * base
        base = (base*base) % modulus
        result %= modulus
        exponent = exponent >> 1

    return result

