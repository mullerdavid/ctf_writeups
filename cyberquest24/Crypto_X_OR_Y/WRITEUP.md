# Xortool

The description suggests XOR. Basic analysis with the `xortool` reveals possible key lengths.

```bash
xortool -x out.txt
```

```
The most probable key lengths:
1:  35.6%
3:  33.5%
5:  30.9%
Key-length can be 3*n
Key-length can be 5*n
```

# Flag format

Assuming the plaintext starts with the flag format from the short length, we can get the key by [XORing with the flag format](https://gchq.github.io/CyberChef/#recipe=From_Hex('Auto')XOR(%7B'option':'Latin1','string':'CQ24%7B'%7D,'Standard',false)To_Hex('Space',0)&input=MWQ0NDhhOTc3MTFhN2FlN2RhNjUyYjRhZGRkNTZmMzA0YWUwZWM1ODAxNzdjYWNjNzc).

```
5e 15 b8 a3 0a
```

Seems like the key might be 5 long as no repetition. [Decrypting with this key](https://gchq.github.io/CyberChef/#recipe=From_Hex('Auto')XOR(%7B'option':'Hex','string':'5e%2015%20b8%20a3%200a%20'%7D,'Standard',false)&input=MWQ0NDhhOTc3MTFhN2FlN2RhNjUyYjRhZGRkNTZmMzA0YWUwZWM1ODAxNzdjYWNjNzc) reveals the full flag.


# Flag

CQ24{Do_you_even_XOR_bro}