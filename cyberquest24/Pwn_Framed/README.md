# Framed

I work for a company that creates embedded devices. Our most recent project is a smart fridge. But the whole team is full of C# developers. Now, we obviously can't run C# on a fridge, right? So we are using C instead. But things often go south. Some `printf` at the right places and we know what's going on. But we were always lacking `Console.ReadLine` to hang the execution and read the outputs before the program exits. I was tasked to write this. I thought nothing can be more optimized and secure (it SEGFAULTs when a security issue is detected to prevent data leakage, how handy) than a simple Assembly program. The demo is up and running. I set it up on my presentation VM for you.

> Remarks from the creator:
> * The challenge requires no brute-forcing
> * latest challenge.zip sha256sum: 27663ab261036db177cc89a5710466d0539e8b6af23b7fc8d74d5173e13d145d
> * please do not DoS the infrastructure, test locally whenever possible and if required, keep only 3-4 connections max
> * the challenge uses one port.

**Flag format**: `CQ24{...}`

*By MJ - Contact me on Discord with the same nick if you think you found an issue or open a ticket in #help-tickets.*

10.10.{1-9}.10

[challenge.zip](files/challenge.zip)

# Writeup

[Writeup](WRITEUP.md)
