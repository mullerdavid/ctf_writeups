# Sage

Sagemath was used for calculations.

## Curve

```
a, b, p = 1234, 5678, 8837
E = EllipticCurve(GF(p), [a, b])
G = E(299, 6040) 
```

## Secrets

```python
alice_private = 1144
bob_private = 2166
alice_public = alice_private * G
bob_public = bob_private * G

shared_secret_1 = alice_private * bob_public
shared_secret_2 = bob_private * alice_public

shared_secret_1 == shared_secret_2
shared_secret_1
shared_secret_1.x()
```

# SHA1

The X coordinate is 1262.

```bash
printf 1262 | sha1sum
```

It's SHA1 sum (without newline) is `6ef79c21dd35ea505e11d0c6673b8a2588fa650b`.

# Flag
`HCSC{6ef79c21dd35ea505e11d0c6673b8a2588fa650b}`

# LLM

Some AI models can easily solve this. This was an example answer.

```
Alice and Bob's shared secret on the elliptic curve is (1262, 5560).
This result was computed using the Elliptic Curve Diffie-Hellman protocol with their private keys (1144 and 2166) and the given curve parameters a=1234, b=5678, p=8837, and base point G=(299,6040). 
Both parties arrive at the same shared secret through scalar multiplication of their private key with the other's public key.
```