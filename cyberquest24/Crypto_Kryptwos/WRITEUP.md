# Krytwos

Kryptos is a sculpture with some encrypted messages inside, in 4 blocks, similar to the challenge.

<https://en.wikipedia.org/wiki/Kryptos>

How to decypher the knwon parts of the original.

<https://isaaclyman.com/blog/posts/kryptos-1/>
<https://isaaclyman.com/blog/posts/kryptos-2/>


# Utils

The [utils.py](workdir/utils.py) can be used in python for basic utilities.

```python
from utils import *
```

# K1

TODO: how to decrypt

Only a few uppercase letter, probably same case in plain and cyphertext, no numbers, no special characters.

3 consecutive uppercase letters `TRU`.


`QZKCJTGUW` is repeaed twice right after `TRU`

```
sorted(freq(x).keys())
38, ['D', 'E', 'F', 'H', 'I', 'M', 'P', 'R', 'S', 'T', 'U', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

sorted(freq(x.upper()).keys())
26, ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

freq(x)
{'t': 26, 's': 25, 'k': 24, 'c': 22, 'w': 22, 'h': 21, 'a': 21, 'l': 20, 'g': 19, 'r': 19, 'd': 18, 'f': 17, 'z': 16, 'x': 16, 'b': 15, 'i': 14, 'm': 14, 'v': 14, 'o': 14, 'e': 13, 'u': 13, 'y': 13, 'j': 12, 'q': 11, 'p': 10, 'n': 10, 'F': 2, 'E': 1, 'I': 1, 'Z': 1, 'T': 1, 'R': 1, 'U': 1, 'D': 1, 'S': 1, 'H': 1, 'M': 1, 'P': 1}

freq(x.upper())
{'T': 27, 'S': 26, 'K': 24, 'H': 22, 'W': 22, 'C': 22, 'A': 21, 'R': 20, 'L': 20, 'F': 19, 'G': 19, 'D': 19, 'Z': 17, 'X': 16, 'I': 15, 'M': 15, 'B': 15, 'U': 14, 'V': 14, 'E': 14, 'O': 14, 'Y': 13, 'J': 12, 'P': 11, 'Q': 11, 'N': 10}
```

# K2

Message with only symbols.

```
sorted(freq(x).keys())
26: ['!', '#', '$', '%', '&', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', ']', '^', '_', '`', '|']

```

TODO: frequency analysis, pairing

# K3

All capital, 2 numbers, no special characters.

```
sorted(freq(x).keys())
27: ['2', '4', 'A', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
```

TODO: frequency analysis, pairing

# K4

TODO: how to decrypt

Symbols and letters mixed.

```
sorted(freq(x).keys())
41 [' ', "'", '*', ',', '9', ':', ';', '<', '>', 'I', 'J', 'L', 'N', 'O', 'U', 'Z', '[', '\\', '^', '`', 'b', 'd', 'f', 'h', 'i', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'y', '{', '}']

sorted(freq(x.upper()).keys())
36 [' ', "'", '*', ',', '9', ':', ';', '<', '>', 'B', 'D', 'F', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'Y', 'Z', '[', '\\', '^', '`', '{', '}']

freq(x)
{"'": 128, '^': 71, '{': 53, 'y': 34, 'Z': 34, 'u': 33, 'b': 33, 'o': 29, 'k': 25, 'l': 24, 'h': 23, 's': 21, 'p': 17, '`': 17, '\\': 14, 'n': 12, 'm': 11, 'i': 9, 'w': 9, 'f': 8, 'O': 6, 'r': 6, ';': 5, ' ': 4, 'd': 4, '}': 3, '<': 2, ',': 2, '[': 2, 'v': 1, '*': 1, 'I': 1, ':': 1, 'U': 1, 'L': 1, 'N': 1, '>': 1, 't': 1, '9': 1, 'J': 1, 'q': 1}

freq(x.upper())
{"'": 128, '^': 71, '{': 53, 'O': 35, 'Y': 34, 'Z': 34, 'U': 34, 'B': 33, 'K': 25, 'L': 25, 'H': 23, 'S': 21, 'P': 17, '`': 17, '\\': 14, 'N': 13, 'M': 11, 'I': 10, 'W': 9, 'F': 8, 'R': 6, ';': 5, ' ': 4, 'D': 4, '}': 3, '<': 2, ',': 2, '[': 2, ':': 1, 'T': 1, 'J': 1, '9': 1, '*': 1, '>': 1, 'V': 1, 'Q': 1}
```

# Flag

TODO
