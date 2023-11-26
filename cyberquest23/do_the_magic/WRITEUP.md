# Checking the file

It is not a valid image file, can not be opened with image viewers.

Binwalk reveals some TIFF data, at similar offset to a regular jpg.

![](screenshots/1.png)

# Comparing

Comparing the hex content with a valid jpg reveals high similarities apart from the header. The zeroes, the gaps, the Exif metadata at same offsets.

![](screenshots/2.png)

![](screenshots/3.png)

Upon closer look, you can also notice that the first 12 bytes are simply the hex representation reversed (10 -> 01).

# Stealing the header

Just replacing the bytes from the test donor is enough fixing the image.

![](workdir/NotAPicture_mod.jpg)

# Flag

`QC{Y0u_d1d_Th3_m4gic}`