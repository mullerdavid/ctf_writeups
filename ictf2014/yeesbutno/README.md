# Service

## Install debs for newer systems

```bash
sudo dpkg -i multiarch-support*.deb
sudo dpkg -i libssl1.0.0*.deb
```
	
## Run the service

The files are inside `./workdir/service/`

```bash
./yeesbutno 3336
```

## Create flag

```bash
(echo flag; echo carrier; echo FLG_SUPERSECRET; echo s) | nc localhost 3336
```

## Goal

Steal the secret flag from flag user without knowing the password.

# Writeup

[Writeup](WRITEUP.md)
