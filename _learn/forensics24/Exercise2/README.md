# Exercise 2

This is the second part of a simulated forensics analysis.

Use `Exercise2.ova` virtual machine. It is hosted here: [SharedFiles](/SharedFiles.md) in the `_learn > forensics24` subfolder.

<details>
  <summary>Import VM</summary> 
  
The image was made with VMWare. If you have trouble importing or starting it, you can untar the `ova` file and convert the `vmdk` into a `qcov2` or similar and import only the disk image. Don't use uefi, use bios instead.

</details>
<br />

Use the user `James` and password `James` (also in pw hint).

You should complete the previous [exercise](../Exercise1/README.md) to avoid spoiler. You can open the task here if you finished that.

## Task

<details>
  <summary>Spoiler</summary> 
  
The company machine executed some ransomware and some files are encrypted. The response team made a memory dump and the packets were captured by the firewall.

Use `Exercise2-3ffa4eee` memory dump. It is hosted here: [SharedFiles](/SharedFiles.md) in the `_learn > forensics24` subfolder.

[capture.zip](files/capture.zip)

Your task is to recover the files from the machine. As an extra, you can check for the source of the infection.

</details>
<br />


[Writeup](WRITEUP.md)
