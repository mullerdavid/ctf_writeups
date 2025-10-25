# SSH

SSH access was granted for a server.

```bash
ssh jack@10.214.1.13 -p 2222
```

![](screenshots/1.png)

Linpeas revealed nothing useful.

There is an extra `h4x0r` user.

![](screenshots/4.png)

The package `doas` was used, but we had no access for anything-

![](screenshots/5.png)

A small hint from the user groups.

![](screenshots/7.png)

# Kernel module

There was an extra kernel module loaded, `sinput`. 

![](screenshots/2.png)

# Reversing

Grabbing the [sinput.ko.gz](workdir/sinput.ko.gz) and opening in ghidra reveals the backdoor.

The driver is handling things written to the `/dev/sinput` file.

![](screenshots/3.png)

The first part is doing a caesar cipher with offset 12 on the input. The second part is checking the first part being `hunter2` and executing the rest. No output is returned.

# Backdoor

Writing a small backdoor command, using `tr` for the caesar substitution and writing/reading to a file for the output works well.

```bash
backdoor() { echo -n "hunter2 $@ > /tmp/pwn 2>&1" | tr "A-Za-z" "M-ZA-Lm-za-l" > /dev/sinput && cat /tmp/pwn; }
```

Adding jack to the `wheel` group so he can use `doas` and interact without the backdoor. The flag is located in `/home/h4x0r/flag.txt`.

![](screenshots/6.png)

# Flag
`CQ24{th3_k3rn3l_1s_4n_1nt3rpRe7er}`