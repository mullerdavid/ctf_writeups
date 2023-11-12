from PIL import Image 
import numpy as np

def reverse_mask(b):
    b = (b & 0xF0) >> 4 | (b & 0x0F) << 4
    b = (b & 0xCC) >> 2 | (b & 0x33) << 2
    b = (b & 0xAA) >> 1 | (b & 0x55) << 1
    return b
  
img = Image.open("Ghosts.bmp")  
npImg = np.array(img)

LUT=np.zeros(256,dtype=np.uint8)
for i in range(256):
    LUT[i]=reverse_mask(i)

Image.fromarray(LUT[npImg]).save('Ghosts_flip.png')