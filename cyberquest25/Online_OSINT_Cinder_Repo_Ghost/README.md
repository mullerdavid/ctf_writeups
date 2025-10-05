# Cinder Repo Ghost

<strong>Cinder Repo — Ghost Index (Player Handout) - HARD Type: </strong> Git forensics (repo archaeology)

**TASK** Generate a local Git repo using the provided script(s). Three tokens are hidden in three different Git artefacts. NOTE → STASH → TAG. Combine the three tokens to produce a flag.

**Note**: Each token is labeled where it appears: tkn1: …, tkn2: …, tkn3: ….

RUN

**Linux/macOS** bash setup_cinder_repo.sh cd cinder_repo_ghost

**Windows (PowerShell)** powershell powershell -ExecutionPolicy Bypass -File .\setup_cinder_repo.ps1 Set-Location .\cinder_repo_ghost

**RULES**

```
No brute force; everything is local.
Don’t modify the repo; reading is enough.
Submit format: CQ25{TOKEN1_TOKEN2_TOKEN3}.
```

[setup_cinder_repo.sh](files/setup_cinder_repo.sh)

[setup_cinder_repo.ps1](files/)

# Writeup

[Writeup](WRITEUP.md)
