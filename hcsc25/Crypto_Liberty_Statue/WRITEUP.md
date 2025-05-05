# Image

The attached file is an image.

![](files/liberty_statue.jpg)

# Metadata

The metadata reveals some interesting info.

```bash
exiftool liberty_statue.jpg
```

```
 ExifTool Version Number         : 13.00
File Name                       : liberty_statue.jpg
Directory                       : .
File Size                       : 173 kB
File Modification Date/Time     : 2025:04:24 18:15:25+02:00
File Access Date/Time           : 2025:04:24 18:16:48+02:00
File Inode Change Date/Time     : 2025:04:24 18:15:25+02:00
File Permissions                : -rwxrwxrwx
File Type                       : JPEG
File Type Extension             : jpg
MIME Type                       : image/jpeg
JFIF Version                    : 1.01
Resolution Unit                 : None
X Resolution                    : 1
Y Resolution                    : 1
XMP Toolkit                     : Image::ExifTool 13.04
Secret                          : TDFiNHJ0eV8xODg2IQ==
Image Width                     : 749
Image Height                    : 524
Encoding Process                : Baseline DCT, Huffman coding
Bits Per Sample                 : 8
Color Components                : 3
Y Cb Cr Sub Sampling            : YCbCr4:2:0 (2 2)
Image Size                      : 749x524
Megapixels                      : 0.392
```

With some secret.

```bash
exiftool -Secret liberty_statue.jpg | awk '{print $3}' | base64 -d
```
```
L1b4rty_1886!
```

# Stegano

Using the secret from earlier:

```
steghide extract -p $(exiftool -Secret liberty_statue.jpg | awk '{print $3}' | base64 -d) -sf liberty_statue.jpg
cat flag.txt
```

# Flag
`HCSC{Th3_d@y_0f_lib4rty}`

# Remarks

This should not be in the crypto category. Rather forensics or steganography.