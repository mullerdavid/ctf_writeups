import sys

offset = 15168
size = 80660

key = b"memcpy"

with open("f-corp_APT.exe", "rb") as exe:
    data = exe.read()
    data = bytearray(data[offset:offset+size])
    plain = []
    for i in range(len(data)):
        if data[i] != 0:
            keychar = key[i % len(key)]
            if data[i] != keychar:
                data[i] = keychar ^ data[i]
    sys.stdout.buffer.write(data)