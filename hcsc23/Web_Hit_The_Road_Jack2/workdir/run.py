import websocket
import json
import threading
import time
import requests

predicted = []
cursor = 0

def task(jsond):
    resp = requests.post('http://10.10.8.12:28167/post/send_number', json=jsond)
    print(str(jsond["number"])+": "+resp.text)

def thread():
    global predicted
    global cursor
    while True:
        if cursor==0:
            time.sleep(0.5)
        else:
            prediction = predicted[cursor+100]
            for i in range(200):  # ~40 generated numbers in 1s
                jsond = {"number":prediction,"cardNumber":"5425 2334 3010 9903","cardName":"John Doe","expiryDate":"04/26","cvv":"113"}
                t = threading.Thread(target=task, args=[jsond])
                t.start()
                time.sleep(1/40)

            

def on_message(ws, message):
    global cursor
    data = json.loads(message)
    received = data["value"]
    cursor = predicted.index(received)
    print("predicted[%d]=%d" % (cursor, received) )

if __name__ == "__main__":
    with open('predicted.txt') as f:
        for line in f:
            predicted.append(int(line[:-1]))

    ws = websocket.WebSocketApp("ws://10.10.8.12:28167/ws/numbers", on_message=on_message)
    t = threading.Thread(target=thread)
    t.start()
    ws.run_forever() 
