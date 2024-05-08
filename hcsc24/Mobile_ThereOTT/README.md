#  ThereOTT

Töltsd le a legújabb alkalmazásomat és szórakozz a legújabb beteg mémeken! 🤪

Sajna semmi se fenékig tejfel, nyilván ezt a szolgáltatást is elkezdték támadni a script kiddiek. És bár a backendem szupergyors, ez okozott némi kimaradást, mivel a kiszolgált videók elég nagyok és elszaturálták a linkemet. Ezért egy forradalmi DDoS védelmi megoldással álltam elő! Eddig tökéletesen működött, SENKI sem tudta feltörni. De ha neked mégis sikerülne, akkor egy tonna dellát ajánlok figyelmedbe challenge pontok formájában! Van egy `/flag` végpont a lelkes bughuntereknek. Küldj rá egy sikeres kérést, küldd el a bizonyítékot, és keresd meg a bugbounty manit!

Még egy boilerplate kódot is adok neked, ez az állapot még a DDoS protection implementálása előtt működött. Ezt kell módosítanod, hogy pontokban gazdag legyél!

```python

import requests

url = "http://replacehost:replaceport"

def main():
    r = requests.post(url + "/flag", data="flag")
    print(r.text)

if __name__ == "__main__":
    main()
```

> Készítői kommentek:
> 
> * a megoldáshoz szerver oldali brute-force nem szükséges
> * a megoldáshoz fizikai Android telefonnal rendelkezni nem szükséges
> * az alkalmazás nem kártékony, futtathatod bármilyen eszközön, ha úgy érzed, hogy ez feltétlenül sz* ges
> * VPN kapcsolat szükséges
> * A jelenlegi app-release.apk sha256sum hash-e: d0* 97ffe66d102e47d7cb399ed84075fe96859c190904b49943e08a1d1d2f
> * a challenge egyetlen porton fut

Hasznos lehet:

* https://github.com/skylot/jadx
* https://developer.android.com/studio/run/emulator
* https://apktool.org/
* https://frida.re/docs/android/
* https://stuff.mit.edu/afs/sipb/project/android/docs/tools/help/logcat.html
* https://play.google.com/store/apps/details?id=net.openvpn.openvpn&hl=en&gl=US

Flag formátum: HCSC24{...}

By MJ

`10.10.1-9.11`

File: [app-release.apk](files/app-release.apk)

<details>
  <summary>Hints (last day)</summary> 
  
Láttad a binárisokat? Lehet nem akarod te azt statikusan visszafejteni.

</details>


# Writeup

[Writeup](WRITEUP.md)
