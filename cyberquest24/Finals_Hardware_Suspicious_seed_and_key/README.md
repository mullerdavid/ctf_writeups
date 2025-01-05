# Suspicious seed&key

To help Joe, the company assigned a mentor to him named Pro Grammer, an expert in automotive cybersecurity. Pro introduced Joe to the seed-and-key mechanism for ensuring authenticity. Inspired, Joe tried to implement the idea but soon realized he didn’t know how to generate random numbers.

Your mission? Find and exploit Average Joe’s oversight to send the right BLE packet and unlock the device.

Use `gatttool`, `bluetoothctl`, an ESP32-C3 board (on the table), a bluetooth dongle (if needed on the table) and the provided [2nd_ble_ctf.pcapng](files/2nd_ble_ctf.pcapng) file.

> You can redeem your flag by showing it to us, the device should light up and the characteristic with `UUID beb5483e-36e1-4688-b7f5-ea07361b26a8` should change to "Score: 2/2".

[2nd_ble_ctf.pcapng](files/2nd_ble_ctf.pcapng)

# Writeup

[Writeup](WRITEUP.md)

# Self hosting

The dumped firmware from the challenge devices can be found in [flash_contents.zip](../Finals_Hardware_It_will_Just_Work/workdir/flash_contents.zip).

This can be installed on compatible boards. Such board is a Tenstar ESP32-C3 Zero, with 4 MB of flash. The led might not work, but the challenge itself does.

![](../Finals_Hardware_It_will_Just_Work/screenshots/1.png)



