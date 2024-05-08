from scapy.layers.l2 import Ether
from scapy.layers.inet import IP
from scapy.layers.inet6 import IPv6, ICMPv6EchoRequest
from scapy.sendrecv import sendp, AsyncSniffer
from scapy.config import conf

from time import sleep
import warnings
import logging

conf.logLevel = logging.ERROR

iface = "eth0"
gateway = "193.225.251.62"
filter = f"ip src {gateway} && ip proto 41"

message = []

def recv(p):
    global message
    reply = p.lastlayer()
    message.append(chr(p.seq))
    print("".join(message))


t = AsyncSniffer(iface=iface, filter=filter, prn=recv)

t.start()

index = 0
ascii = 0

while len(message)==0 or message[-1]!="}":
    guess = Ether() / IP(dst=gateway, proto=41) / IPv6(src="2001:470:6d:d6::1") / ICMPv6EchoRequest(id=index, seq=ascii)
    sendp(guess, verbose=False)
    ascii += 1
    if 255<ascii:
        index += 1
        ascii = 0

t.stop()
