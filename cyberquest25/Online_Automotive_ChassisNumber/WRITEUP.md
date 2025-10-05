# Dump

The dump is standard text based can dump.

# Crib

Looking for the `CQ` crib results a single id, `6B4`.

```bash
cat candump.txt | cut -c 26- | grep 4351 | sort -u
```

```
6B4#0000000000435132
```

Extracting the data from there.

```bash
grep '6B4#' candump.txt | cut -c 30- | sort -u
```

```
0000000000435132
01357B6334726964
02336E746974797D
```

# Hex

The first byte shows the order, like in other can messages. Converting back to ascii.

```bash
grep '6B4#' candump.txt | cut -c 30- | sort -u | cut -c 3- | xxd -r -p
```

```
CQ25{c4rid3ntity}
```

# Flag
`CQ25{c4rid3ntity}`