import requests
import base64

from BeeRecognition.Predict import predict

IMAGE_PATH = './kaggle/bee_imgs/bee_imgs/'
HOST = 'http://10.10.3.11:53369'

proxies = {
   'http': 'http://localhost:1080',
}

print("Requesting images")
ret = {}
req = requests.get(HOST+'/images', proxies=proxies)

print("Pairing images")
resp = req.json()
for item in resp:
    for key,value in item.items():
        file = f"images/{key}.png"
        with open(file, "wb") as f:
            f.write(base64.b64decode(value))
        ret[key] = predict(file)

print("Sending response")
resp = requests.post(HOST+'/submit', json = ret, proxies=proxies)
print("Received response")
print(resp)
print(resp.text)