# Diff

Based on EOFWorld #1 the original and recovered image has small differences.
 - Some pixels are different, colors are different by +-1 on all 3 RGB channel
 - The "barcode" with the pixels
 - `Fantasy Arts #W498` text in bottom right corner
 - White stripe on top and bottom

![](workdir/diff.png)

Cutting away the white stripes.

![](workdir/acropalypse_py_cropped.png)

# LSB

The +-1 difference and few pixels only can indicate something is hidden in least significant bit (LSB).

Zsteg finds the hidden information.

```bash
zsteg acropalypse_py_cropped.png
```

![](screenshots/1.png)

```
72:http://silverstone:pirateflavoredrum@challengeserverip:36147/interesting
```
# Interesting

Visiting the url downloads the file [interesting](workdir/interesting/interesting).

```
=ybegin line=128 size=120 423 name=interesting.pdf
OznpW...
=yend size=120 423 crc32=b6a80292
```

File doesn't know this file format, but a Google [search](https://www.google.com/search?q=ybegin+line+size) reveals `yEnc`.

The tool at <https://www.webutils.pl/yEnc> can decode the file with small modification. The space from the file size at the start and end needs to be removed: `120423`. This results in [interesting.pdf](workdir/interesting/interesting.pdf).

# PDF

The PDF is broken. There are 2 `%PDF` headers. 

<https://opensource.adobe.com/dc-acrobat-sdk-docs/pdfstandards/PDF32000_2008.pdf>

```
If a PDF file contains binary data, as most do (see Section 3.1, “Lexical Conventions”), it is recommended that the header line be immediately followed by a comment line containing at least four binary characters—that is, characters whose codes are 128 or greater. This ensures proper behavior of file transfer applications that inspect data near the beginning of a file to determine whether to treat the file’s contents as text or as binary.
```

![](screenshots/2.png)

Removing the first header is fixing the pdf. [interesting_fix.pdf](workdir/interesting/interesting_fix.pdf).

It is a PDF about `Locke and Key`.

![](screenshots/3.png)

# Key Candidates

The image is extracted as is [interesting_embed_img.jpg](workdir/interesting/interesting_embed_img.jpg).

The `i` in `teenage issues` and `v` in `keeps viewers` are different from the other text, italic.

After first pdf header, plus the binary placeholder, there are 16 bytes before the real pdf header.
```
4b 47 7b 46 ae 3d a4 da d4 5c 6a 63 f8 d3 88 21
```

The `/FormXob.63123a782b0f2086bdac6cf5544f3f75 11 0 R` also has 16 bytes.
```
63 12 3a 78 2b 0f 20 86 bd ac 6c f5 54 4f 3f 75
```

The files have these md5sums, which is also 16 bytes,

```
58 7b 98 c0 84 28 3b 3b be c3 d8 6e a9 39 4a 4a  interesting/interesting
ba 00 e7 55 33 42 e3 6d 40 94 ec c1 c0 dc 1b 7e  interesting/interesting.pdf
ae d6 c7 f1 4e 52 37 95 5d 67 93 f7 7e ae a4 29  interesting/interesting_fix.pdf
```

The readme suggest `A kulcs: kitartás!`. Might be literal.

# Brute force

Using `HCSC` as crib, there was 1 hit with [solve.py](workdir/solve.py).

![](screenshots/4.png)

`CFB8 key aed6c7f14e5237955d6793f77eaea429 iv 4b477b46ae3da4dad45c6a63f8d38821 b'HCSC{w\xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8bh\xe2\x80\x8d4t_\xd0\xb0_m3ss_of_4_ch\xe2\x80\x8b4\xe2\x80\x8dlleng3}\n\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8d \xe2\x80\x8b \xe2\x80\x8d \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8b \xe2\x80\x8d \xe2\x80\x8d \xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8d \xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8b \xe2\x80\x8d \xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d \xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8d\xe2\x80\x8d\xe2\x80\x8d\xe2\x80\x8d \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8b\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8b\xe2\x80\x8d \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8d\xe2\x80\x8b \xe2\x80\x8d\xe2\x80\x8b\xe2\x80\x8d \xe2\x80\x8b \xe2\x80\x8d\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c'`

The key was the md5sum of the real pdf file after the deccoy header (obciously, not guessy at all), the iv was the decoy header, the algorithm was AES128 with CFB8.

It has a bunch of extra chars, probably UTF-8.

```py
{
    'H': 1, 
    'C': 2, 
    'S': 1, 
    '{': 1, 
    'w': 1, 
    '\u200b': 67, 
    '\u200d': 39, 
    'h': 2, 
    '4': 3, 
    't': 1, 
    '_': 5, 
    'а': 1, 
    'm': 1, 
    '3': 2, 
    's': 2, 
    'o': 1, 
    'f': 1, 
    'c': 1, 
    'l': 2, 
    'e': 1, 
    'n': 1, 
    'g': 1, 
    '}': 1, 
    '\n': 1, 
    ' ': 36, 
    '\x0c': 12
}
```

There are a bunch extra whitespace characters, `\x20`, `\x0c`, `\u200b`, `\u200d`. The `\x0c` is just the padding at the end.

After removing them there is our second flag. The `а` is a cyrillic `a`.

# Flag 2
`HCSC{wh4t_а_m3ss_of_4_ch4lleng3}`

# Whitespaces

After removing the flag chars and replacing them with readable chars.

```
1212121111321213111321213211131213123212132123132321113132323131213111311112311213132311113123213111322222321113131213211131213123212132123132
```

# Morse

Replacing them with different characters and after the full flag, reveals a more familiar one.

```
.... -.-. ... -.-. -... .-. .- -.-. -.- . - -... . - - . .-. ... ....- ..-. . - .... .- -. ... ----- -... . .-. -... .-. .- -.-. -.- . -
```

```
HCSCBRACKETBETTERS4FETHANS0BERBRACKET
```

# Flag 3
`HCSC{BETTERS4FETHANS0BER}`
