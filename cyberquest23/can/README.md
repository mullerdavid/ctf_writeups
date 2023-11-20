# CAN Security 101

If you hook onto a CAN bus, you see all the communication that\u2019s on it. Secure, right?

> Remarks:
> * To access this challenge, you\u2019ll have to physically connect to one of the USB-CAN interfaces in the middle of the room (they are identical).
> * To set up the interface, we suggest using the following command: sudo ip link set can0 up type can bitrate 500000 sample-point 0.75

**Flag format**: `cq23{...}`

 *By [Daniel Lakatos](mailto:Daniel.Lakatos@hu.bosch.com), Robert Bosch Kft.*

<details>
  <summary>Hints</summary> 
  
Look for can id 0x0000f146 and 0x0000f147.
</details>

## Environment

There were 2 physical machines running something available with a can output. Also some can to usb interface was provided, with recommended settings above.

# Writeup

[Writeup](WRITEUP.md)
