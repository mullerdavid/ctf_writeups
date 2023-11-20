from math import nan
import time
import requests
import random
import string
import threading

def thread():
    while True:
        chars = string.ascii_letters + string.digits + string.punctuation + "\x00"
        fuzz = ''.join(random.choice(chars) for i in range(19))

        jsond = {"number":1234,"cardNumber":fuzz,"cardName":"John Doe","expiryDate":"04/26","cvv":"113"}
        resp = requests.post('http://10.10.8.12:28167/post/send_number', json=jsond)

        if resp.status_code != 500 and "Stripe API returned error (insufficient funds or wrong details given)" not in resp.text:
            print("-------------------------------------------")
            print(jsond)
            print(resp.text)


for i in range(40): 
    t = threading.Thread(target=thread)
    t.start()
time.sleep(3600)
