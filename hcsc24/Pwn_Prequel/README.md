#  Prequel

Bob, Alíz és Éva imádnak különboző módokon köszönni egymásnak. Olyan sok különböző köszönési formát gyűjtöttek össze, hogy egy egyszerű szöveges fájlnál többre van szükségük a tárolásukhoz. Régebben egy JSON adatbázist használtak, mert a JSON erre kiválóan alkalmas, nem igaz? De egy nemrégiben bekövetkezett áramszünet miatt megsérült az adatbázisuk. A program nem fejezte be a záró `}` írását és így az összes eddigi adat ment a levesbe... Végre új ötlettel álltak elő! Így született meg a `prequel`. Szeretnéd, hogy üdvözöljenek? Mire vársz, csatlakozz!

> Készítői kommentek:
> 
> * a megoldáshoz szerver oldali brute-force nem szükséges
> * VPN kapcsolat szükséges
> * A jelenlegi challenge.zip sha256sum hash-e: df1* 223fc4b7c3f391f46b7f9ba32e0887390d88cdab9d25c17616927866c4
> * a challenge egyetlen porton fut

Flag formátum: HCSC24{...}

By MJ

`10.10.1-9.12`

Files: [challenge.zip](files/challenge.zip)

<details>
  <summary>Hints (last day)</summary> 
  
A flag a messages.db-ben van, SELECT flag FROM flag; kiolvassa. Ret2win, de van elég gadgeted? Sztringeket nézted?

</details>


# Writeup

[Writeup](WRITEUP.md)
