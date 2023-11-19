# Getting the challenge

The file is an executable.

Upon running the binary, it has a small shop interface.

![](screenshots/1.png)

# Checking the logic

Ghidra can recover the code ([costumery.c](workdir/costumery.c)) relatively well. 

FUN_00401553 looks like the main function with all the menus. Upon buying something, it asks for discount card with FUN_00401497 and reads your IBAN account with FUN_0040150a.

# The problem

The IBAN reader function can read bigger memory (0x100) than the buffer (0x70), overflowing on the stack. 

```c
void FUN_0040150a(void)
{
  undefined local_78 [112];
  
  printf("Enter your IBAN number: ");
  fflush((FILE *)0x0);
  read(0,local_78,0x100);
  return;
}
```

# Exploit

Pwntools can be used to view protections. There is no stack canary or PIE, or practically anything. Can also be used to generate some cyclic strings to determine the RIP offset. The program can be stopped on returning from the FUN_00401497 to get the offset. See [debug.py](workdir/debug.py).

![](screenshots/3.png)

There is a backdoor function starting shell.

```c
void FUN_00401951(void)
{
  system("/bin/sh");
  return;
}
```

Jumping there on return would result a shell. See [exploit.py](workdir/exploit.py).

![](screenshots/4.png)

# Looking for the flag

There is a flag.txt in `/home/challenger/`, but it has no flag. 

```
Yayy, we are in! But where is the flag? I remember I saved it somewhere, but where?
```

The environment is limited, not many executable is available. To print out the processes without `ps`, the following snippet can be used.

```bash
for i in `ls -1 /proc/ | egrep "([0-9]+)"`; do echo "$i:[`cat /proc/$i/comm`] `cat /proc/$i/cmdline`"; done
```

There aren't many processes running. While `grep` is not available, `egrep` is. It has issues at certain places, like `/proc`, it can stuck in an infinite loop. Using `find` and `timeout` to circumvent it, which are also available.

```bash
find / -type f -exec timeout 1 egrep -s -H -i cq23 {} \;
cat /proc/1/environ
```
In the process with PID 1, the flag can be found hidden in the environment variables. The reason it is not in the shell environment is that we used `execve` with an empty environment.

![](screenshots/5.png)

# Flag

cq23{e45y_p34zy_l3m0n_squ33zy_455857558d7d1499aa7498949546a2b2}