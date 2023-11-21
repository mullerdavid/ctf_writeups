#!/usr/bin/env python 

# (echo flag; echo carrier; echo FLG_SUPERSECRET; echo s) | nc localhost 3336

import os
import sys
from exploit import *

ip = '127.0.0.1'
port = 3336
flag_id = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(8))
flag = 'FLG_'+''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(12))

if len(sys.argv)>2:
  ip = sys.argv[1]
  port = sys.argv[2]

print flag
os.system("(echo "+flag_id+"; echo carrier; echo "+flag+"; echo s) | nc localhost 3336 > /dev/null")

exploit = Exploit()
exploit.execute(ip, port, flag_id);
print exploit.result()
