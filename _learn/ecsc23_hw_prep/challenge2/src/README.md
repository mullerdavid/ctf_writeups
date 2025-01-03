# Source

The mixed c and c++ source files can be found under `src` directory.

There is an unreachable function that decrypts and prints the flags. The first flag is always printed, the second only if the r1 register is 69.

There is also a buffer overflow vulnerability. Exploiting it could be used to go inside the decrypt function. Could be used to run some shellcode and set r1 and go to decrypt afterwards.

The flag store is the last sector of the flash.

The program has some tamper protection. The flag store is encrypted using aes with the md5 hash of the first 1 MiB of the flash as key, altering the program results in garbage when decrypted, as the key is changed.

# Compiling

Compile the project with the Pico SDK. Use the [CMakeLists.txt](CMakeLists.txt).

The output files should be in the `build` directory: `main.elf`, `main.bin`, `main.uf2`.

# Generating the flag

Chose 2 32 bytes long strings as the flags. 

```
DB{23ba345e029c137179fc3551503c}
DB{ea4d25a78cddc9fda52f1e465eb8}
```

Store them at 2 slots, offset 0 and 64. [flag.bin](flag/flag.bin)

The flags should be xored with `42` for slot 1, and `69` for slot 2. [flag_xor.bin](flag/flag_xor.bin)

Download the first 1 MiB of flash after uploading `main.bin` to the pico. See fist part of [Flashing](#flashing) before uploading the flag. Calculate the md5 hash for it.

```bash
picotool save -r 0x10000000 0x10100000 hash.bin
md5sum hash.bin
```

```
172ce3cae6d393d6d69f6da7d30c5129
```

AES encrypt the xored flags with the md5 hash as both key and iv. Use CBC mode. [flag_aes.bin](flag/flag_aes.bin)


# Flashing

Nuke the flash with [flash_nuke.uf2](../../extras/flash_nuke.uf2) to clear previous data if applicable.

```bash
picotool load -x flash_nuke.uf2
```

Install the [main.bin](build/main.bin) from build directory.

```bash
picotool load build/main.bin
```

Add the [flag_aes.bin](flag/flag_aes.bin) created earlier.

```bash
picotool load -o 0x101ff000 flag/flag_aes.bin
```

# Saving everything
Exporting the full flash with padding and flags. Change the address if more of the flash storage was utilized earlier.

```bash
picotool info -a
picotool save -r 0x10000000 0x10200000 challenge2.uf2
```

# Source fragment

The [challenge2.c](challenge2.c) file is just shallow copy of the original functionality to help reversing.