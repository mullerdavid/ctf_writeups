```
              ██╗  ██╗██╗   ██╗███╗   ██╗ ██████╗  █████╗ ██████╗ ██╗ █████╗ ███╗   ██╗
              ██║  ██║██║   ██║████╗  ██║██╔════╝ ██╔══██╗██╔══██╗██║██╔══██╗████╗  ██║
              ███████║██║   ██║██╔██╗ ██║██║  ███╗███████║██████╔╝██║███████║██╔██╗ ██║
              ██╔══██║██║   ██║██║╚██╗██║██║   ██║██╔══██║██╔══██╗██║██╔══██║██║╚██╗██║
              ██║  ██║╚██████╔╝██║ ╚████║╚██████╔╝██║  ██║██║  ██║██║██║  ██║██║ ╚████║
              ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝

 ██████╗██╗   ██╗██████╗ ███████╗██████╗     ███████╗███████╗ ██████╗██╗   ██╗██████╗ ██╗████████╗██╗   ██╗
██╔════╝╚██╗ ██╔╝██╔══██╗██╔════╝██╔══██╗    ██╔════╝██╔════╝██╔════╝██║   ██║██╔══██╗██║╚══██╔══╝╚██╗ ██╔╝
██║      ╚████╔╝ ██████╔╝█████╗  ██████╔╝    ███████╗█████╗  ██║     ██║   ██║██████╔╝██║   ██║    ╚████╔╝
██║       ╚██╔╝  ██╔══██╗██╔══╝  ██╔══██╗    ╚════██║██╔══╝  ██║     ██║   ██║██╔══██╗██║   ██║     ╚██╔╝
╚██████╗   ██║   ██████╔╝███████╗██║  ██║    ███████║███████╗╚██████╗╚██████╔╝██║  ██║██║   ██║      ██║
 ╚═════╝   ╚═╝   ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝   ╚═╝      ╚═╝

             ██████╗██╗  ██╗ █████╗ ██╗     ██╗     ███████╗███╗   ██╗ ██████╗ ███████╗
            ██╔════╝██║  ██║██╔══██╗██║     ██║     ██╔════╝████╗  ██║██╔════╝ ██╔════╝
            ██║     ███████║███████║██║     ██║     █████╗  ██╔██╗ ██║██║  ███╗█████╗
            ██║     ██╔══██║██╔══██║██║     ██║     ██╔══╝  ██║╚██╗██║██║   ██║██╔══╝
            ╚██████╗██║  ██║██║  ██║███████╗███████╗███████╗██║ ╚████║╚██████╔╝███████╗
             ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝
                                     ____   ___ ____   __
                                    |___ \ / _ \___ \ / /_
                                      __) | | | |__) | '_ \
                                     / __/| |_| / __/| (_) |
                                    |_____|\___/_____|\___/
```


# Mirrors
- https://cdn.hcst.hu/HCSC-2026.7z
- https://cdn.hcst.hu/HCSC-2026.tar.gpg
- https://cdn.hcst.hu/HCSC-2026.tar.age
- https://cdn.hcst.hu/HCSC-2026.torrent

# Info

- Mind a három fájl (.7z, .tar.gpg, .tar.age) ugyanazon állományokkal rendelkezik, így elég  CSAK EGY  tömörített fájlt letölteni a három közül!
- Ezen tömörített állományok titkosítva vannak, a visszafejtésükhöz való kulcsot a verseny folyamán az erre a célra létrehozott Discord csatornán és e-mailben fogjuk közzétenni.
- A gyengébb erőforrásokkal rendelkező, de gyakorlott játékosok számára a .tar.age kiterjesztésű állomány letöltése ajánlott, amelyet a https://github.com/FiloSottile/age GitHub Repository-ban található program segítségével lehet visszafejteni.
- A CDN-ről való gyorsabb letöltés érdekében ajánljuk az aria2 program használatát az alábbi módon: `aria2c -x 10 https://cdn.hcst.hu/HCSC-2026.<választott kiterjesztés>`

# Resource requirements

- 4 GB RAM
- Min. 50GB storage
- VMware Workstation Player 17
- IP `192.168.253.131`

# Login credentials

- User:      `hcscplayer`
- Password:  `meme.Haboru`

# Decrypt

|       File        | Command                                                                      | 
| :---------------: | :--------------------------------------------------------------------------- |
|       .7z         | `7z e HCSC-2026.7z`                                                          |
| .gpg (GnuPG 2.3+) | `gpg HCSC-2026.tar.gpg && tar -xvf HCSC-2026.tar`                            |
|      .age         | `age --decrypt -o HCSC-2026.tar HCSC-2026.tar.age && tar -xvf HCSC-2026.tar` |


# Checksums

## HCSC-2026.7z
- SHA256:   `d3ab3bbb7cd38a1615776c862dc4460b6bb308fd878a926ba59e5563fe0e483c`  
- SHA1:     `d235f2497a006b9689a5c63c10447bca16f4d293`  
- MD5:      `31c2d85abdb78925d39339fd5a0ff05a`  
- BLAKE2b:  `08f39fef30ca8ea392a5ad4a0ec56507b09e96551df76235f990c7969550e43d77676192858411149cb8d53c197f28cf8bcbe436c8f4a1b1537de5b4a6f42904`  

## HCSC-2026.tar.gpg
- SHA256:   `8f8c6d3adedee5406b3eae55f73d2a0ce23cdca18b6ed0eda3ac445fe9b9eeb8`  
- SHA1:     `782c957f0a2aea625c0c43c776a4a845d801c0e4`  
- MD5:      `152b80a07d225be3565dbd3216de31f2`  
- BLAKE2b:  `94f017f2fba9a8b0c63e1174a046aac9f6068cd19c8bfc01150a14f6c6f15a7392edbf348deb5023fb3f36bd303719dc3cc0032e7ab9490e189cfefa4913c73e`  

## HCSC-2026.tar.age
- SHA256:   `f1836be10eba8e034e116a6da9c5efee5598c1be96aae58453e054d6cc019e2c`  
- SHA1:     `5e8afcf36ff7fd50ec3ee4bad6589eb3dec44403`  
- MD5:      `550971214245376d166dd58b7dbf42d6`  
- BLAKE2b:  `df5a76526e7cb1197bed0f9cbb647cdfde98e137286f3aaf3d27f34825a0e85cbbe67e2eb0e99a780961e435958d0238d1f215a476296bc597a22e0201b491d0`  

# Discord
https://discord.gg/yGVb4pKyxs

# GL HF
---
