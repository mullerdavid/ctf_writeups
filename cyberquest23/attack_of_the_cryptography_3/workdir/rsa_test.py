from Crypto.Util.number import getPrime, long_to_bytes, inverse
#flag = open("flag.txt", "r").read().strip().encode()
flag = b"Placeholder plaintext"

class RSA:
    def __init__(self):
        self.p = getPrime(512)
        self.q = getPrime(512)
        self.e = 3
        self.n = self.p * self.q
        self.d = inverse(self.e, (self.p-1)*(self.q-1))
    def encrypt(self, data: bytes) -> bytes:
        pt = int(data.hex(), 16)
        ct = pow(pt, self.e, self.n)
        return long_to_bytes(ct)
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
    ct = crypto.encrypt(flag)
    pt = crypto.decrypt(ct)
    print("E:", crypto.e)
    print("D:", crypto.d)
    print("N:", crypto.n)
    print("PTin:", flag)
    print("CT:", ct.hex())
    print("PTout:", pt)

if __name__ == "__main__":
    main()
    
    
