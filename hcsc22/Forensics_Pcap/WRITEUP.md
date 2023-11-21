# Pcap

Opening the pcap with wireshark, there is only one udp stream and arp packets inside.

![](screenshots/1.png)

Right click on the packet, Follow, UDP Stream. Saving the file in Raw format (otherwise it will corrupt it) reveals a pdf file.

![](screenshots/2.png)

# PDF

Opening the file, there is a message about non-existing second page in hungarian. The page was hidden.

![](screenshots/3.png)

With [pdf-parser](https://www.kali.org/tools/pdf-parser/) the information can be extracted from the document step by step.

```bash
pdf-parser stream.pdf --stat
```

![](screenshots/4.png)

object 2 has the pages.

```bash
pdf-parser stream.pdf --object 2
```

![](screenshots/5.png)

Object 3 is the first page. This can be seen under `Kids` in previous step.

![](screenshots/6.png)

The only other object with `/Type /Page` is Object 14.

![](screenshots/7.png)

The pdf format is text based mostly, which means it can be restored with a simple text editor as well. Only the missing page object should be added to the pages under `Kids`.

![](screenshots/8.png)
![](screenshots/9.png)

Opening the pdf afterwards has the second page.

![](screenshots/10.png)

# Flag
HCSC2022{476hvhjgj989cvbdfdesfzjjk3}
 
