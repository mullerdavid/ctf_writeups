import time

def throttle(sec):
    time.sleep(sec)
    
def check(inp, correct):
    print(f"Checking {inp}. Throttling to prevent bruteforce!")
    throttle(2)
    return inp == correct

def check_combination(inp_list):
    key = []
    key.append(0x2c)
    key.append(0x32)
    key.append(0xb8)
    key.append(0x35)
    key.append(0xd8)
    key.append(0x58)
    key.append(0x27)
    key.append(0xb4)
    key.append(0xc3)
    key.append(0xaf)
    key.append(0x9a)
    key.append(0xb6)
    key.append(0x1d)
    key.append(0xfb)
    key.append(0x45)
    key.append(0xb3) 
    n = len(key)
    mi = 0x0
    ma = 0xff
    if type(inp_list)!=list:
        print("Error: input is not a list!")
        return
    if len(inp_list)!=n:
        print(f"Error: input is not {n} long!")
        return
    for i in inp_list:
        if type(i)!=int:
            print("Error: element is not an int!")
            return
        if i < mi or ma < i:
            print(f"Error: element is not in range ({mi}-{ma})!")
            return
    for i in range(n):
        if not check(inp_list[i], key[i]):
            print(f"Error: invalid guess at {i} (ret value)!")
            return i
        else:
            print(f"Valid guess at {i}!")
    f = open(".flag.bin", "b")
    data = f.read()
    flag = ""
    for i in range(len(data)):
        k = key[i % len(key)]
        flag += chr(data[i] ^ k)
    print(f"Congratulation for the flag: {flag} !")
    return n

