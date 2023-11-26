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

# Not solved yet
This is where I got stuck. 

The image is extracted as is [interesting_embed_img.jpg](workdir/interesting/interesting_embed_img.jpg).

The `i` in `teenage issues` and `v` in `keeps viewers` are different from the other text, italic.

After first pdf header, plus the binary placeholder, there are 16 bytes before the real pdf header.
```
4B 47 7B 46 AE 3D A4 DA D4 5C 6A 63 F8 D3 88 21
```

The `/FormXob.63123a782b0f2086bdac6cf5544f3f75 11 0 R` also has 16 bytes.
```
63 12 3a 78 2b 0f 20 86 bd ac 6c f5 54 4f 3f 75
```

TODO: solve it