# F-Junction

By MJ
Hello wanderer!

You have stumbled upon a mysterious binary that guards a hidden secret. To navigate its complexity, you must choose between two mathematical paths. One is the visible road everyone sees, and the other is the Ghost Path where the truth resides.
The Decoy Formula (Lane A)

The binary initially presents a clear path, calculated using a simple linear arithmetic progression. This sequence determines the "Tutorial" output you see when running the program normally:

```
$$f(n) = (7n + 42) \pmod{2048}$$
```

This path is designed to be found. It fills the buffer with decoy characters that form a coherent sentence, guiding you toward a destination that doesn't actually exist.
The Ghost Formula (Lane B)

The true path to the secret is hidden within a recursive sequence. While Lane A is linear and predictable, Lane B follows a deterministic chain where each step depends entirely on the one before it:

```
$$x_{n+1} = (5x_n + 1) \pmod{2048}$$

    Starting Point ($x_0$): $1337$
    The Factor: $5$
    The Shift: $1$
    The Bounds: $2048$
```

To reach the end, you must walk this sequence for 60 steps. Each value $x$ corresponds to a specific junction function that must be invoked to reconstruct the secret.
A Word of Warning

The binary is delicate. If your reconstruction results in a garbled mess or a corrupted string, it means you haven't quite mastered the environment yet. If you fail to see the secret, you simply need to try harder.

The path is clear. Trust the map, but remember that some logic is invisible to the naked eye.

PS: `junk_*` -> used to decrypt the tutorial; `junc_*` -> used to decrypt the flag. No need to mix them. Just get the order right.

Handout: challenge.zip (junction ELF + libjunction.so + README + Docker setup)

f693fe002a3e843be1c469a725b626d1f83b19c3 challenge.zip

Category: Reverse

350 points

Difficulty: Medium
