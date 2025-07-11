# Logfile

The logfile has 2 different log types mixed.

Some HTTP logs.

```
10.0.0.2 - - [25/Apr/2025:15:57:15 ] "HEAD /api/data HTTP/1.1" 401 3768 "https://news.ycombinator.com/" "PostmanRuntime/7.32.2"
```

Some DNS query logs.

```
2025-04-25T15:57:30 194.153.184.54 → 77.88.8.8: A? cHJvdG9udnBz.gov.hu
```

# Normalizing logs

Usually logs are not mixed like this. 

Using a few regex replaces, it can be converted to a common date format and split into usable columns for better separating things.

- Dates
  - `Apr/2025`
  - `04/2025`
- HTTP
  - `([0-9\.]+)\s-\s-\s\[([0-9]+)/([0-9]+)/([0-9]+):([^\]]+)\s\]\s"([^"]*)"\s([0-9]*)\s([0-9]*)\s"([^"]*)"\s"([^"]*)"`
  - `\4-\3-\2T${5}\t\t\t\t\t\1\t\6\t\7\t\8\t\9\t${10}`
- DNS
  - `([0-9\-]+T[0-9:]+)\s([0-9\.]+)\s→\s([0-9\.]+):\s([^\s]+)\s(.*)`
  - `\1\t\2\t\3\t\4\t\5\t\6\t\7`

Inserting this into some database/table like PowerBI allows different queries and stuff.

# Garbage

The logs are actually garbage, has nothing to do with some real investigation. The entropy is high everywhere, not even the DNS query types make sense.

# Fake flag

There are some outliers, like the base64 encrypted `cHJvdG9udnBz.gov.hu` decoding to `protonvps`, but not used anywhere.

The other one is the `0x00.hu` domain. Concatenating the subdomains and interpreting them as hex.

```
4843.0x00.hu
5343.0x00.hu
7b4c.0x00.hu
3374.0x00.hu
735f.0x00.hu
4330.0x00.hu
756e.0x00.hu
745f.0x00.hu
7468.0x00.hu
336d.0x00.hu
5f34.0x00.hu
3131.0x00.hu
7d.0x00.hu
```

Reveals `HCSC{L3ts_C0unt_th3m_411}`, which is in the flag format, but actually just a fake flag `¯\(°_o)/¯`.

# Fake flag(s) 2

There is a http request going for `https://0.0x00.hu/` in the logs. Visiting the site results some more random flags, different each time. Again flag format, at least it is obvious that it is not real from returning different each time `¯\_(ツ)_/¯`.

```
HCSC{4r34_d3ny_rC6GULc}
HCSC{sp4c3_c0d3_4cc3pt_bl0ck}
HCSC{b34t_z0n3_z0n3_r3str1ct}
HCSC{v4l1d_d3crypt_us3r_l1m1t}
HCSC{d3ny_k3y_t1ck_l0g1n}
HCSC{p4ssw0rd_4cc3pt_pr1v4t3_r3j3ct}
...
```

# Credentials

Guessing that doing the same queries `A` queries for `0x00.hu` subdomains results some IPs.

```bash
grep -o -E "([0-9a-f]{2,})\.0x00\.hu" evidence.log | xargs dig
```

```
4843.0x00.hu.           273     IN      A       105.100.57.54
5343.0x00.hu.           273     IN      A       50.50.56.56
7b4c.0x00.hu.           273     IN      A       51.54.58.117
3374.0x00.hu.           273     IN      A       109.99.72.76
735f.0x00.hu.           273     IN      A       110.89.109.66
4330.0x00.hu.           273     IN      A       120.121.65.70
756e.0x00.hu.           273     IN      A       55.90.65.69
745f.0x00.hu.           273     IN      A       82.50.67.66
7468.0x00.hu.           273     IN      A       117.74.57.76
336d.0x00.hu.           273     IN      A       57.110.67.54
5f34.0x00.hu.           273     IN      A       84.110.112.68
3131.0x00.hu.           273     IN      A       78.102.113.115
7d.0x00.hu.             273     IN      A       76.104.105.98
0.0x00.hu.              273     IN      A       104.21.112.1
0.0x00.hu.              273     IN      A       104.21.96.1
0.0x00.hu.              273     IN      A       104.21.80.1
0.0x00.hu.              273     IN      A       104.21.64.1
0.0x00.hu.              273     IN      A       104.21.48.1
0.0x00.hu.              273     IN      A       104.21.32.1
0.0x00.hu.              273     IN      A       104.21.16.1
```

Using the IP addresses as ascii characters encoded as decimals results some credentials.

```bash
grep -o -E "([0-9a-f]{2,})\.0x00\.hu" evidence.log | xargs dig +noall +answer | awk '{ print $5 }' | tr . '\n' | while read -r num; do printf "\\$(printf '%03o' "$num")"; done
```

```
id96228836:umcHLnYmBxyAF7ZAER2CBuJ9L9nC6TnpDNfqsLhib
```

# Not fake flag

Guessing that you can send these credentials as basic auth to the previous fake flag endpoint results the flag.

```bash
curl "https://id96228836:umcHLnYmBxyAF7ZAER2CBuJ9L9nC6TnpDNfqsLhib@0.0x00.hu"
```

![](screenshots/2.png)

# Flag
`HCSC{Sz14_Ur4m_C2_C0mm4nd_3rd3k3l}`
