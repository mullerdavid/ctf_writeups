from gmpy2 import iroot # pip install gmpy2
from Crypto.Util.number import long_to_bytes, bytes_to_long
ct = long_to_bytes(0x04a79e9c67598005715b233e00e7d9bc3e2d4ebe10864667726214e43eb892b3dbf736628f328ffe8fbff756861254a039b45c68a7c66d3728649834cfd3eebb90c3d84865)
e = 3

def main():
    c = bytes_to_long(ct)
    m = iroot(c, e)
    pt=long_to_bytes(m[0])
    print("PTout:", pt)

if __name__ == "__main__":
    main()