# CAN

See [CAN Security 101](../can/WRITEUP.md) writeup for initial setup and interesting packets.

More can logs can be found in [logs.zip](workdir/logs.zip)

# Starting point

There was a tip on `0x00001337`.

```
Are you familiar with UDS? Try dropping a message with ID 0x479 to find it out.
```

Sending any data with [uds.py] triggers a bunch of incoming data on `0x7EE`. See [uds.py](workdir/uds.py).

The incoming data after trigger is Unified Diagnostic Services (UDS) protocol defined by ISO-14229.

There is a python implementation. <https://udsoncan.readthedocs.io/en/latest/index.html>

# Seed

There was an another tip on `0x00424242`.

```
The answer to every question is 42. With a twist.
```

In a ~~real~~ secure environment the seed is not repeating, but here it is repeating after `42` iterations.

# Replaying the seed

Spamming with a valid `F2D1779E` seed on a channel allows entry. See [poc.py](workdir/poc.py). 

The flag is found in the memory afterwards.

```
0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000637132337b5930755f3472335f345f747275335f43344e5f6834636b3372217d0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
```

# Flag
cq23{Y0u_4r3_4_tru3_C4N_h4ck3r!}

# Credits
Credits to MJ for the base of writeup, dumps and poc.