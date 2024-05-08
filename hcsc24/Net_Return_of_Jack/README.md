# Return of Jack

A sok utálat miatt, amit tavaly Jack kapott, a helyi hatóságok letartóztatták és bezárták egy elhagyatott sziget börtönébe. Sok-sok morális rágódás után végül úgy döntött, hogy végre kész élni a következményekkel és kész meglobogtatni a fehér zászlót, majd beismerni tettét. Azonban a szigeten igencsak limitált a kommunikációs hálózat. Gyakorlatilag az egész sziget egy speciális /64-es IPv6 tartományon osztozik. Először lépj vele kapcsolatba, aztán folytatjuk!
Ezeket az adatokat tudjuk:

    2001:470:6d:d6::/64 a hálózat
    2001:470:6d:d6::1337 egy hintet tartalmaz, de ezen kívül nem használható semmi másra
    minden más IP a tartományból használható a Jackkel való kommunikációra
    Jack nem sokat tud a hálózatokról, illetve router firmware fejlesztésekről, így csupán egyetlen hálózati réteg protokollt implementált le sikeresen. Ezen a protokollon ha kérdezel (ID: 128), ő talán válaszol (ID: 129). De a következőt mindenképp vedd figyelembe! Ez az egyetlen esélye, hogy kommunikáljon a külvilággal lebukás nélkül. Nyilván nem lesz túl bőbeszédű. Csak a jó kérdésre fog válaszolni (kivéve a hint esetében, hiszen az nem Jack műve). :)

Nem megy az IP elérése a "clear weben"? Semmi gond! Az első feladatod egy kis network OSINT. :) Who is on the other side?
Még mindig nem tiszta minden?

Itt egy pontokba szedett lépéssorozat. Nem árt, ha ezekre mind tudsz válaszolni:

    Találd ki, hogy milyen szolgáltatásra lehetett használva a megadott IPv6 tartomány. Valószínűleg még szükséged lehet erre az infóra.
    Milyen protokollt használ Jack? Felismered az azonosítókat? Valószínűleg ez is fog kelleni.
    Mi történik, ha azt az IPv6 címet szólítod meg, ami a hintben szerepel? Lehet, hogy ad egy tippet, hogy hogyan tovább...
    Profit!

Megjegyzés: A challenge megoldása során neked közvetlenül csak az alább megadott IPv4 cím felé kell adatot küldened.

Megjegyzés: A célcím (dst) csak akkor számít, amikor a hinttel beszélgetsz. Minden más esetben lehet a cél bármilyen IPv6 cím.

    Készítői kommentek:

        VPN kapcsolat nem szükséges
        Ez a challenge a megszokott infrastruktúrán kívül van hosztolva és egy szerveren elérhető. Az IP-t lentebb találjátok.
        a challenge nem TCP és nem is UDP, más

Hasznos lehet az utadon:

    https://wireshark.org
    https://scapy.net/
    https://datatracker.ietf.org/ linkek

Kinda funny. You are going to capture the flag, capture data and rescue the captured Jack at the same time. :D

Flag formátum: HCSC24{...}

Köszönet Zaletnyik Péternek az IPv6-os kérdéseimmel kapcsolatban nyújtott válaszaiért!

By MJ
193.225.251.62 (erre az IP-re szabad út jár, bármit ér küldeni rá) 

<details>
  <summary>Hints (last day)</summary> 
  
A "whois 2001:470:6d:d6::1337 | grep broker" adjon neked ihletet utadon hajósinasom!

</details>

<details>
  <summary>Hints (50%)</summary> 
  
Akkor a checklist...
  1. IPv4(IPv6(ICMPv6()))
  2. ICMPv6
Hol a flag? Többet erővel, mint ésszel! Elvégre egy gonosztevőről van szó! ICMP-re nézz rá, hogy hol lehet benne flaget rejteni.

</details>

# Writeup

[Writeup](WRITEUP.md)
