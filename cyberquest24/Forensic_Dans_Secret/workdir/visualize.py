from PIL import Image, ImageFont, ImageDraw 
from ds_store import DSStore



img = Image.new(mode="RGB", size=(12000, 900))
draw = ImageDraw.Draw(img)
font = ImageFont.truetype("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf", 16)

with DSStore.open(".DS_Store", "rb") as ds:
    for item in ds:
        if item.code == b"Iloc":
            x,y = item.value
            draw.text((x*50, y*35),item.filename,(255,255,255),font=font)
            
            
img.save('sample-out.jpg')