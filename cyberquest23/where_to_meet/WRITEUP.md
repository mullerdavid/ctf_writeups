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

Downloading and using the TeamTalk client with the server on port `10333` reveals nothing. 

Based on the documentation an example guest user was found. It's credentials `guest:guest` also works on the TeamTalk server.

Using the [tt5admin.php](https://github.com/BearWare/TeamTalk5/raw/master/Client/ttphpadmin/tt5admin.php) variant of the client, modifying it slightly to allow non-admin login [tt5test.php](workdir/tt5test.php) works for logging in, but has no extra permission.

# SSH

On port `10334` there is an SSH server running.

There were no credentials and it was explicitly mentioned brute force was not required. The previous `guest:guest` is not working.

After the hint, we received credentials: `teamtalkguest:teamtalkguestpassword`. Logging in with this works.

# Looking around

There was a backup configuration file. Inside there is a hidden channel with the password.

TODO: exact location

Joining to that hidden channel now reveals the flag.

TODO: screenshots

# Flag
CQ23{Bearware-TeamTalk-514-Latest-Best-Conference-Sys}