# Checking the site

Visiting the site suggests we should look elsewhere.

![](screenshots/1.png)

# Dirbuster

Guesisng `.DS_Store` from the challenge name or using a web scanner with a proper wordlist would result in <http://10.10.1.11:27521/.DS_Store>. It is a file used by MacOS to store folder metadata, like icon locations, etc.

The file is saved as [.DS_Store](workdir/.DS_Store).

# DS Store

There are various parsers for DS_Store files, one of them is [ds-store](https://pypi.org/project/ds-store/) pip module. 

```bash
python3 -m ds_store .DS_Store > ds_store.txt
```

# Flag part 1

There are 2 parts that stand out, one of them is `flag_first_part`.

```
flag_first_part_e000107637abb05d823cbb918acd7d13.txt flag you are on the right track :) btw, info for the second part: (219, 29)

```

Downloading the [flag_first_part_e000107637abb05d823cbb918acd7d13.txt](workdir/flag_first_part_e000107637abb05d823cbb918acd7d13.txt) from the webserver next to the DS Store reveals the first part: `CQ24{d1d_D4n_l34k_8688`.

# Flag part 2

The hint `(219, 29)` at first flag might suggest the Iloc (Icon Location). There are a lot of random filenames, but nothing has that location.

After checking the file more in depth, even with hex editor, there is nothing else in the file apart from the already parsed data, nothing in the free chunks.

[Visualizing](workdir/visualize.py) the Iloc reveals the second part of the flag: `_1D4_fr0m_7h3iR_1344`.

![](workdir/sample-out.jpg)


# Flag part 3

This is the other part standing out.

```
flag_third_part                                      bwsp {
    'CF$UID': 1,
    'NS.keys': 'reverse NS.objects',
    'NS.objects': [   61,
                      48,
                      72,
                      77,
                      122,
                      81,
                      68,
                      78,
                      102,
                      57,
                      122,
                      98,
                      119,
                      81,
                      51,
                      88,
                      121,
                      78,
                      106,
                      100,
                      121,
                      86,
                      85,
                      78,
                      102,
                      82,
                      69,
                      98,
                      74,
                      86,
                      110,
                      81]
}
```

The third flag is some plist metadata, suggesting reversing it. 

```python
from base64 import b64decode
x =  [ 61, 48, 72, 77, 122, 81, 68, 78, 102, 57, 122, 98, 119, 81, 51, 88, 121, 78, 106, 100, 121, 86, 85, 78, 102, 82, 69, 98, 74, 86, 110, 81]
x.reverse()
b64decode("".join([chr(i) for i in x]))
```
With a small snippet it can be decoded to `BuIlD_5Erv3r_t0o?_4430}`.


# Flag join

While the description said it had all the underscores present, there is a missing one between the second and third part. Later this was fixed to accept without that as well.

# Flag

CQ24{d1d_D4n_l34k_8688_1D4_fr0m_7h3iR_1344_BuIlD_5Erv3r_t0o?_4430}