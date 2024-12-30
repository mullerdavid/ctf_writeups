import requests
import datetime
import math

letters = [
	"a",
	"b",
	"c",
	"d",
	"e",
	"f",
	"g",
	"h",
	"i",
	"j",
	"k",
	"l",
	"m",
	"n",
	"o",
	"p",
	"q",
	"r",
	"s",
	"t",
	"u",
	"v",
	"w",
	"x",
	"y",
	"z",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9"
]

currentLetter = "s";
finalString = "s";
while True:
    l = currentLetter
    ts = math.floor(datetime.datetime.now().timestamp())
    resp = requests.get("http://10.10.1.11:63206/api", params={"callback":"retFl", "l":l, "ct": ((ts >> 6)+ord(l)), "ts": ts})
    #print(l)
    l = resp.text[17:18]
    if l == '"':
        break
    currentLetter = l
    finalString += currentLetter
    
print("CQ24{"+finalString+"}")