from Crypto.Util.number import getPrime, long_to_bytes, inverse
ct = long_to_bytes(0x04a79e9c67598005715b233e00e7d9bc3e2d4ebe10864667726214e43eb892b3dbf736628f328ffe8fbff756861254a039b45c68a7c66d3728649834cfd3eebb90c3d84865)

class RSA:
    def __init__(self):
        self.p = getPrime(512)
        self.q = getPrime(512)
        self.e = 3
        self.n = self.p * self.q
        self.d = inverse(self.e, (self.p-1)*(self.q-1))
    def decrypt(self, cyphertext: bytes) -> bytes:
        ct = int(cyphertext.hex(), 16)
        pt = pow(ct, self.d, self.n)
        return long_to_bytes(pt)
        
def main():
    crypto = None
    while True:
        try:
            crypto = RSA()
            break
        except:
            pass
    pt = crypto.decrypt(ct)
    print("PTout:", pt)

if __name__ == "__main__":
    main()
    
