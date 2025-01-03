# Source

## main
The [main.py](main.py) is just a little example how to use the runtime.

## runtime
The [runtime.py](runtime.py) is a small program that can check a combination 1 byte a time with some throttle and xor decode a flag with that combination upon success.

To change the combination, just replace the following with your values.

```python
key.append(0x2c)
key.append(0x32)
key.append(0xb8)
key.append(0x35)
key.append(0xd8)
key.append(0x58)
key.append(0x27)
key.append(0xb4)
key.append(0xc3)
key.append(0xaf)
key.append(0x9a)
key.append(0xb6)
key.append(0x1d)
key.append(0xfb)
key.append(0x45)
key.append(0xb3) 
```
##  flag
The [flag.bin](flag.bin) is the xor encoded flag.

Pick a string for flag.
```
DB{9f0da760555afe0f657c6a18d688}
```

Just xor encode it with the key earlier, `2c32b835d85827b4c3af9ab61dfb45b3`.

# Compiling
To make the `runtime.py` obfuscated and harder to reverse, it was compiled to [mpy](https://docs.micropython.org/en/latest/reference/mpyfiles.html) format with [mpy-cross](https://github.com/micropython/micropython/blob/master/mpy-cross/README.md).

```bash
python -m mpy_cross runtime.py -march=armv7m
```

# Flashing

Nuke the flash with [flash_nuke.uf2](../../extras/flash_nuke.uf2) to clear previous data if applicable.

```bash
picotool load -x flash_nuke.uf2
```

Install Micropython. The generic version was used originally, so the challenge runs on most RP2040, even though the HW had more flash. Optionally use that was originally used, [micropython-rp2-pico-20230426-v1.20.0.uf2](tools/micropython-rp2-pico-20230426-v1.20.0.uf2). 

```bash
picotool load -x micropython-rp2-pico-20230426-v1.20.0.uf2
```

Starting the board and the installed Micropython, the [pyboard.py](tools/pyboard.py) was used to upload the files to it's internal `LittleFS` filesystem.

```bash
python -m pyboard --device COM7 -f cp main.py :main.py
python -m pyboard --device COM7 -f cp runtime.mpy :runtime.mpy
python -m pyboard --device COM7 -f cp flag.bin :.flag.bin # uploading as hidden!
```
# Saving everything
Exporting the full flash with Micropython and the other files. Change the address if more of the flash storage was utilized earlier.

```bash
picotool info -a
picotool save -r 0x10000000 0x10200000 challenge3.uf2
```

# Extra
Theoretically, the mpy modul could be also preinstalled with a custom Micropython, but it was easier this way.
