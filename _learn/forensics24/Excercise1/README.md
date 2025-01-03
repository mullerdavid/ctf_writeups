# Excercise 1

This is the first part of a simulated forensics analysis.


There are some restrictions to make it more fun. The time is limited, and you should not restart the machine. The VM should be able to access the internet.

## Task 1

Use `Excercise1.ova` virtual machine. It is hosted here: [SharedFiles](/SharedFiles.md) in the `_learn > forensics24` subfolder.

<details>
  <summary>Import VM</summary> 
  
The image was made with VMWare. If you have trouble importing or starting it, you can untar the `ova` file and convert the `vmdk` into a `qcov2` or similar and import only the disk image. Don't use uefi, use bios instead.

</details>
<br />

After starting the machine, you have 30 minutes to find the traces of the malware. Use the user `James` and password `James` (also in pw hint).

You can install tools if you want, but avoid using automated tools. Don't use/update windows defender or antivirus softwares either.

## Task 2

You should complete the previous task to avoid spoiler. If you finshed that, you can open this.

<details>
  <summary>Spoiler</summary> 
  
The malware automatically triggered after 20 mins. Ohh nooooo. (Open the `In case of error` if it did not happen)

*Feel free to restart the machine anytime, it was just to trigger the malware properly.*

If you found and prevented the malware, good job. If not, don't worry, it is part of the excercise.

The task is now to find the malware and reverse the damage it caused. Use the following files instead of the ones on your desktop, as the VM had no flag.

[ohhno5.zip](files/ohhno5.zip)

</details>
<br />

<details>
  <summary>In case of error</summary> 
  
There is an external component. The malware is trying to query the `desktop-1234.ransom.dbrn.win` TXT record.

I might stop serving it, in that case, use your own DNS server and return `cf0dcf4e9858e51b4b53bb3e06b850a0=MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCSRYvL8mVcXTOWbosIbZuVyVvKlu1M3kgR1+pZzchnAR2OLaK3WP+f3Uik5fKPpPXNeTm9M1K491F0teG3HJVHCJd+/F+JGlcjB9hly+WZZgKGswECkkw69UP0GdaC3JIbksEmtn2pD/K7oF9sIQjX4clXhXd53sTJeP8G1wOpGwIDAQAB` for the query.

</details>
<br />

# Writeup

[Writeup](WRITEUP.md)
