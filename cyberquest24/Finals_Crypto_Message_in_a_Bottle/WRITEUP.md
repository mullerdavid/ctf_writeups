# Base64

There was basically nothing given. Converting the message `fWZsQl9JbHVfYkg0dl9sMGdfaDRkX2cxezQySlgK` from base64 results in the `}flB_Ilu_bH4v_l0g_h4d_g1{42JX`, which looks really similar to the flag format, but reversed.

# Reverse

Reversing it results in `XJ24{1g_d4h_g0l_v4Hb_ulI_Blf}`. 

# Substitution ciphers

There is not a big sample size, therefore it is probably some known algo, like Caesar or Vigenère. Using the known flag format as crib helps identifying the algo and the key possibly. After iterating through the [common ciphers](https://en.wikipedia.org/wiki/Substitution_cipher#External_links), Atbash gives a good decryption. Via [Cyberchef](https://gchq.github.io/CyberChef/#recipe=From_Base64('A-Za-z0-9%2B/%3D',true,false)Reverse('Character')Atbash_Cipher()&input=Zldac1FsOUpiSFZmWWtnMGRsOXNNR2RmYURSa1gyY3hlelF5U2xnSw).

# Flag
`CQ24{1t_w4s_t0o_e4Sy_foR_You}`
