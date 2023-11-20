import requests
import json

jsondata = '{"number":NaN,"cardNumber":undefined,"cardName":NaN,"expiryDate":NaN,"cvv":NaN}'

obj = json.loads(jsondata)

print(obj)

cardNumber = obj.get("cardNumber", None)

if not cardNumber:
    print("Missing or empty field 'cardNumber'")
else:
    print(cardNumber)
    print("Stripe API returned error")