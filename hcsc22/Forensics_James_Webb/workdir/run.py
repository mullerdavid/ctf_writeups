#!/usr/bin/env python3
from PIL import Image
img = Image.open('photo2.gif')
counter = 0
out = ""
while True:
    frame = img.tell()
    rgb_img = img.convert('RGB')
    r,g,b = rgb_img.getpixel((195, 95))
    #red has 179 min value, 184 max
    #print(frame, r, g, b)
    #print(frame, r-179) 
    if r == 184:
        out = out + 'h'
    elif r == 179:
        out = out + 'l'
    try:
        img.seek(frame+1)
    except:
        break
out = ' '.join(out.split())
#short beep has high val, long has 7
out = out.replace("hhhhhhh", "-")
out = out.replace("hhh", ".")
out = out.replace("lllllll", " ")
out = out.replace("l", "")
print(out)