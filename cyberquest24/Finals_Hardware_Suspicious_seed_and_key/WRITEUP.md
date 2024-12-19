# Random

The title suggests some issue with the random generator, but as the hardware had no RTC clock or any proper source of entropy before connecting to it, it was ignored. Power cycling the device would reset it to the original state anyways.

# Replay

The challenge is practically identical to the first BLE challenge ([writeup](../Finals_Hardware_It_will_Just_Work/WRITEUP.md)), replaying the write commands unlocks the challnge.

```
TODO: relevant parts from pcap as text
```

```bash
gatttool -b 58:CF:79:E3:5D:82 -I
connect
primary
TODO: finish

```

This made the LED blinking on the board with a certain pattern (different from previous challenge) as well as now replying with the score for reading the `beb5483e-36e1-4688-b7f5-ea07361b26a8` characteristic.

```bash
TODO: finish
```

TODO: screenshot

![](screenshots/1.png)

# Flag

There was no flag, the check was manual inspection.
