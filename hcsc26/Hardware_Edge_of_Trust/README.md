# Edge of Trust

As a high-ranking politician, your data is a matter of national security. Traditional shredding is for amateurs. Our cutting-edge vault allows you to encrypt critical documents without ever handling the cryptographic keys yourself. Need to disappear? Hit the Panic Button to instantly purge the master key, rendering your sensitive files permanently unreadable.

This challenge runs on real infrastructure, hosting is donated by MJ. Each player gets its own VM upon connection. Due to the expensive infrastructure (apologies for that), a max of 20 VMs can be launched simultaneously. We expect that this number can easily be increased (so that 20 is just a startup safeguard) and we will keep monitoring. Feel free to contact if you couldn't connect and we will increase the connection limit. But realistically most work can be done offline if you pull the required files (and I encourage you to do so, it's much easier until you have the final exploit).

VMs do not have internet. VM escape is not the intended solution. :P
Environment

When you connect to the challenge server via SSH, you must complete a short proof-of-work printed in your terminal before a VM is started. After that you'll be dropped into a Linux shell on the target device. The device has:

```
    /home/player/edge_of_trust - CLI tool to interact with the TAs
    /home/player/main.c + Makefile - Source code (you can modify and rebuild locally)
    /home/player/encrypted_flag.bin - The encrypted flag
    /mnt/secure/ - The secure filesystem ™️
```

(MJ <whispers>: /opt might be useful for some as well.)
START INSTANCE button will not work, use the Connection.

Connection: ssh magyarneveketnembruteforceolsenki@65.109.85.158 -p 2222 (password: szeretemasajtot)

Category: Hardware / TrustZone

500 points

Difficulty: Hard
