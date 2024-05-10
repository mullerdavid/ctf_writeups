import pandas as pd
import hashlib
import requests
import base64

IMAGE_PATH = './kaggle/bee_imgs/bee_imgs/'
HOST = 'http://10.10.3.11:53369'

proxies = {
   'http': 'http://localhost:1080',
}

def file_md5(file_name, path=IMAGE_PATH):
    return hashlib.md5(open(path+file_name,'rb').read()).hexdigest()

def b64_md5(str):
    return hashlib.md5(base64.b64decode(value)).hexdigest()

print("Reading dataset")
df=pd.read_csv('./kaggle/bee_data.csv')
df['md5'] = df.apply(lambda row: file_md5(row['file']), axis=1)

print("Requesting images")
ret = {}
req = requests.get(HOST+'/images', proxies=proxies)

print("Pairing images")
resp = req.json()
for item in resp:
    for key,value in item.items():
        md5 = b64_md5(value)
        result = df[df['md5'] == md5]
        ret[key] = result["subspecies"].iloc[0]

print("Sending response")
resp = requests.post(HOST+'/submit', json = ret, proxies=proxies)
print("Received response")
print(resp)
print(resp.text)