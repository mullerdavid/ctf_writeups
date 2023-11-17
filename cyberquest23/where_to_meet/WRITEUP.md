# Nmap

Scanning the host reveals tcp port 10333 and 10334 that possibly belongst to the challenge.

```
Nmap scan report for 10.10.2.12
Host is up (0.0024s latency).
Not shown: 65529 closed tcp ports (conn-refused)
PORT      STATE    SERVICE  VERSION
22/tcp    filtered ssh
5080/tcp  open     http     nginx 1.25.2
10333/tcp open     teamtalk BearWare TeamTalk 5.13.1.5115 (protocol: 5.11; servername: cyberquest2023; no authentication required)
10334/tcp open     ssh      OpenSSH 9.3 (protocol 2.0)
```

# TeamTalk

Downloading and using the TeamTalk client with the server reveals nothing.

# SSH

There were no credentials and it was explicitly mentioned brute force was not required.

After the hint, we received credentials: `teamtalkguest:teamtalkguestpassword`.

# Looking around

There was a backup configuration file. Inside there is a hidden channel with the password.

TODO: exact location

Joining to that hidden channel now reveals the flag.

TODO: screenshots

# Flag

TODO: flag