# CAN You Read My Memory?

Reading or writing memory should not be allowed for everyone. For example, we don\u2019t allow it for you, otherwise you\u2019d be able to read out our secret flag.


>Remarks:
> * To access this challenge, you\u2019ll have to physically connect to one of the USB-CAN interfaces in the middle of the room (they are identical).
> * To set up the interface, we suggest using the following command: sudo ip link set can0 up type can bitrate 500000 sample-point 0.75

**Flag format**: `cq23{...}`

 *By [Daniel Lakatos](mailto:Daniel.Lakatos@hu.bosch.com), Robert Bosch Kft.*

## Environment

There were 2 physical machines running something available with a can output. Also some can to usb interface was provided, with recommended settings above.

# Writeup

[Writeup](WRITEUP.md)
