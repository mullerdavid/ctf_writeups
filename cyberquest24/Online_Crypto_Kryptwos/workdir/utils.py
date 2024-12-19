import numpy as np
from pprint import pprint

def freq(x):
	y = {}
	for c in x:
		if c in y:
			y[c] += 1
		else:
			y[c] = 1
	k = list(y.keys())
	v = list(y.values())
	sv = np.argsort(v)[::-1]
	yy = {k[i]: int((v[i]/len(x))*100000)/1000 for i in sv}
	return yy
	
def minmax(x):
	items = freq(x).keys()
	return min(items), max(items)
	
def substitute(sub, x):
	y = ""
	for c in x:
		if c in sub:
			y += sub[c]
		elif c.lower() in sub:
			y += sub[c.lower()]
		else:
			y += c
	return y
	
def pp(x):
	pprint(x, sort_dicts=False)