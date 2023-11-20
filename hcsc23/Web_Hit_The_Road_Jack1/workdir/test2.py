from math import nan
import requests
import json

for i in range(1):
    #print(i)
    if True:
        jsond = {"number":100000,"cardNumber":b"\x00","cardName":"\x00","expiryDate":"\x00","cvv":"\x00"}
        resp = requests.post('http://10.10.8.12:28167/post/send_number', json=jsond)
    else:
        jsond = '{"number":NaN,"cardNumber":"1231 2312 3131 3131","cardName":NaN,"expiryDate":NaN,"cvv":NaN}'
        try:
            json.loads(jsond)
        except Exception as ex:
            print(str(type(ex)) + ": " + str(ex))
        resp = requests.post('http://10.10.8.12:28167/post/send_number', data=jsond, headers={"Content-Type":"application/json"})
    print(resp.text)
