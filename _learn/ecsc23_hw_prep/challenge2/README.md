# Challenge

Firmware for challenge is at [challenge2.uf2](files/challenge2.uf2). There is a source fragment at [challenge2.c](files/challenge2.c) to help.

<details>
  <summary>Hint 1 (small spoiler)</summary> 

There are some constants in the code.

Somewhere: `EFCDAB89`, `67452301`, `98BADCFE`, `10325476`.

Elsewhere: `63 7C 77 78 F2 6B 6F C5`.

Reversing the decryption might not be the easiest solution.

</details>

<details>
  <summary>Hint 2 (big spoiler)</summary> 

There are some constants in the code.

Somewhere: `EFCDAB89`, `67452301`, `98BADCFE`, `10325476`.
 - <https://en.wikipedia.org/wiki/MD5#Pseudocode> (sha1 also has these, but also `C3D2E1F0` which is missing here), also the precomputed table constants can be found nearby
 - <https://rosettacode.org/wiki/MD5/Implementation_Debug>

Elsewhere: `63 7C 77 78 F2 6B 6F C5`.
 - https://en.wikipedia.org/wiki/Rijndael_S-box
 - https://github.com/johanstenberg92/AES/blob/master/src/org/johanstenberg/aes/Constants.java

Reversing the decryption might not be the easiest solution. It is using MD5 and AES. 

Could be the MD5 causing the tamper protection?

</details>

<details>
  <summary>Hint 3 (big spoiler)</summary> 
  
Use [main.elf](src/build/main.elf) for the program logic.

</details>

# Writeup

[Writeup](WRITEUP.md)

# Source

[Source](src/README.md)
