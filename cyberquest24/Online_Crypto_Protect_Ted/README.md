# Protect Ted

Some of you may remember an old challenge of mine, *ObfuscaTED*. If not, no problem. It was a JavaScript deobfuscation challenge where our desperate customer (who happens to host his Ted talks on his website) tried to make sure that you can't rip their content. For that several efforts were made by the developer, but nothing stopped the hackers from getting the flag still.

So what do we do? Encryption is the way, right? And we are going to use `AES`, because we like things nice and symmetric. But that leaks the key, so what even is the point... Or maybe not?

With Protect Ted we are going next level! Ted comes with a handy backend server which can decrypt stuff for you. Your task is to figure the AES key, send it as a whole to the backend and it may tell you the flag.

AES mode? I will let you guess! :P

> Remarks from the creator:
> The challenge requires no server side brute-forcing
> latest challenge.zip sha256sum: 01fcb18e33b096f2f091697887f16e7bb1de02d55c7342f8fe7ecda46a15d7cb
> the challenge uses one port.



**Flag format**: `CQ24{...}`

*By MJ - Contact me on Discord with the same nick if you think you found an issue or open a ticket in #help-tickets.*

10.10.{1-9}.12:63514

[challenge.zip](files/challenge.zip)

# Writeup

[Writeup](WRITEUP.md)
