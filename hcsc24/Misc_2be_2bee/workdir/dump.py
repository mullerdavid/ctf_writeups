import requests
import base64


proxies = {
   'http': 'http://localhost:1080',
}

for i in range(100):
    req = requests.get('http://10.10.3.11:53369/images', proxies=proxies)
    resp = req.json()
    for item in resp:
        for key,value in item.items():
            with open(f"images/{key}.png", "wb") as f:
                f.write(base64.b64decode(value))


