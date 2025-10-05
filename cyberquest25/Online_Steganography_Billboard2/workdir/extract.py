from PIL import Image

def extract_lsb_bits(image_path):
    img = Image.open(image_path).convert("RGB")
    width, _ = img.size

    r_bit0, r_bit1 = [], []
    g_bit0, g_bit1 = [], []
    b_bit0, b_bit1 = [], []

    for x in range(64):
        r, g, b = img.getpixel((x, 0))
        r_bit0.append((r >> 0) & 1)
        r_bit1.append((r >> 1) & 1)
        g_bit0.append((g >> 0) & 1)
        g_bit1.append((g >> 1) & 1)
        b_bit0.append((b >> 0) & 1)
        b_bit1.append((b >> 1) & 1)
    return (r_bit0, r_bit1, g_bit0, g_bit1, b_bit0, b_bit1)


if __name__ == "__main__":
    r0, r1, g0, g1, b0, b1 = extract_lsb_bits("image.bmp")
    print("R1:", r1[:40])
    print("R0:", r0[:40])
    print("G1:", g1[:40])
    print("G0:", g0[:40])
    print("B1:", b1[:40])
    print("B0:", b0[:40])
    
    bitstream = []
    for bits in zip(r1, r0, g1, g0, b1, b0):
        bitstream.extend(bits)
    bytes_out = []
    for i in range(0, len(bitstream), 8):
        byte_bits = bitstream[i:i+8]
        if len(byte_bits) < 8:
            break
        byte = 0
        for b in byte_bits:
            byte = (byte << 1) | b
        bytes_out.append(byte)
    bytes_out = bytes(bytes_out)
    print(bytes_out)
    print(bytes_out.decode())
