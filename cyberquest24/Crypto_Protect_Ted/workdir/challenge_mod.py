import sys
from base64 import b64decode
from whitebox import wb

from bluegalaxyenergy import WhiteBoxedAES, BGE

class MyWhiteBoxedAES(WhiteBoxedAES):

    def __init__(self, whitebox):
        decoded_data = whitebox

        self.round_tables = [[[None] * 4 for _ in range(16)] for _ in range(9)]
        self.final_table = [None] * 16

        self.init_substitution_box = list(decoded_data[0:0x100]) # 16*16
        self.init_inverse_substitution_box = list(decoded_data[0x100:0x200]) # 16*16
        self.final_substitution_box = list(decoded_data[0x200:0x300]) # 16*16
        self.final_inverse_substitution_box = list(decoded_data[0x300:0x400]) # 16*16

        self.xor_table_0 = list(decoded_data[0x400 : 0x400 + 0x10000]) # 256*256
        self.xor_table_1 = list(decoded_data[0x400 + 0x10000 : 0x400 + 0x20000]) # 256*256
        self.xor_table_2 = list(decoded_data[0x400 + 0x20000 : 0x400 + 0x30000]) # 256*256

        current_position = 0x400 + 0x30000
        for round_num in range(9):
            for row in range(16):
                for col in range(4):
                    self.round_tables[round_num][row][col] = list(
                        decoded_data[current_position : current_position + 0x100]
                    )
                    current_position += 0x100

        for row in range(16):
            self.final_table[row] = list(decoded_data[current_position : current_position + 0x100])
            current_position += 0x100

    def isEncrypt(self):
        return True

    def getRoundNumber(self):
        return 10

    def hasReverse(self):
        return False

    def apply(self, state):
        for round_num in range(self.getRoundNumber()):
            state = self.applyRound(state, round_num)
        return state



    def applyRound(self, data, round_num):
        output=[None]*16
        tmp=[None]*16

        if round_num == 0:
            for i in range(16):
                tmp[i % 4 * 4 + i // 4] = self.init_inverse_substitution_box[data[i]]
            data = tmp[:]
        if round_num < 9:
            for i in range(16):
                byte_groups = [0, 0, 0, 0]
                for j in range(4):
                    byte_groups[j] = self.round_tables[round_num ][i][j][
                        data[j * 4 + ((i + j) % 4)]
                    ]

                output[i] = self.xor_table_2[
                    ( self.xor_table_0[(byte_groups[0] << 8) | byte_groups[1]] << 8 ) | 
                    ( self.xor_table_1[(byte_groups[2] << 8) | byte_groups[3]] )
                ]
        else:
            for i in range(16):
                row = i // 4 + (i % 4) * 4
                col = (i & (~3)) + ((i + i // 4) % 4)
                tmp[row] = self.final_table[i][data[col]]
            output = [self.final_inverse_substitution_box[tmp[i]] for i in range(16)]


        return output

def pad(input):
    if len(input) > 16:
        raise ValueError("Input mustn't be more than 16 bytes")
    return input.encode() + b"\x00" * (16 - len(input))

# input_data = input("Enter the input you want to encrypt (max 16 bytes): ")
input_data = "A"*16 # C081EDA3E18AE03B970B2F9800E8B963
input_data = "ABCDEFGHIJKLMNOP" # 9A790A1A075572A6F5A421895B23BA36
input_data = pad(input_data)
input_data = pad("\x73\x65\x63\x72\x65\x74\x3a\x49\x6c\x30\x56\x65\x64\x30\x67\x35")

mywb = MyWhiteBoxedAES(b64decode(wb))
out = "".join([f"{i:02X}" for i in mywb.apply(input_data)])
print("encrypted key:", out)

bge = BGE(mywb)
bge.run(shuffle=True)

key = bge.computeKey()
if key is not None:
    print("key:", key.hex())


