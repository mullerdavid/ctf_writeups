# Gallery

I’ve always dreamed of creating my own site where users can upload and share their favorite memes with the world. After exploring various FTP server software, I found most of them either overly complex or lacking the features I wanted. That's when I discovered __ProFTPd__—a mature server that aligned perfectly with my vision, serving as a solid reference for my own, proprietary server software.

On one hand, I appreciate the straightforward command-response port, but it's a bit quirky that passive mode requires a separate port. Ah, the charm of old protocols and their design oddities!

Now, let's tackle this challenge. My flag is hidden at `/flag.txt`, but it seems to have been leaked by some nefarious parties. I’m puzzled as to why that happened; I really tried to adhere to ProFTPd’s implementation of the FTP protocol. Maybe that was my downfall? These folks must really think outside the box.

> Remarks from the creator:
> * The challenge requires no server side brute-forcing
> * all files you upload get saved to the server's RAM, therefore there are certain limits. You may not upload more than 2 MiB per file and you may not have more than 20 of them. The challenge also resets files after 5 minutes, so if you connect, you have 5 minutes and the files are purged
> * the service uses your VPN IP to authenticate you, therefore you shouldn't be able to see others' files
> * if possible, do not exhaust the passive port range (100 ports are allocated per host), others won't be able to connect to the specific host then
> * the challenge uses one FTP port, one HTTP port and the FTP port optionally assigns extra ports to you.

PS: Creating this challenge was a lot of fun. FTP is an interesting protocol.

Flag format: `CQ24{...}`

*By MJ - Contact me IRL or on Discord with the same nick if you think you found an issue or open a ticket in #help-tickets.*

`10.10.[1-9].10:49542/60498/10000-10100 `

# Writeup

[Writeup](WRITEUP.md)
