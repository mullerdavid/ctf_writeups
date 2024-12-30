# Animal Farm

## Mission

You are tasked with running a biological simulation where wolves, rabbits, and carrots coexist in a closed ecosystem. The simulation is operating on a top-down grid view.

## Objective

* Analyze the provided binary with keen eyes
* Identify any unusual behavior or activity in the simulation
* Restore intended functionality of the simulation
* Retrieve the hidden flag

## How-to

```bash
docker build -t animalfarm .
docker run -it animalfarm
```

> Remarks from the creator:
> * offline challenge, no VPN is required
> * latest animalfarm sha256sum: 59b44baa55550da8c613a2ed0dcd0a2ca7386ae1414d654070b4eb63e190aefb
> * latest Dockerfile sha256sum: 9a1427a323e98238c4658370902b513103ce7be6b8ee0d01ac4927d9fd4fe937

Flag format: `CQ24{...}`

*By raygerlabs*

[animalfarm.zip](files/animalfarm.zip)

# Writeup

[Writeup](WRITEUP.md)
