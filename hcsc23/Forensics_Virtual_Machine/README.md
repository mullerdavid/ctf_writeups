# Challenge

A virtual machine image was distributed with multiple challenges of different types.

The VM files are hosted here: <https://1drv.ms/f/s!AhobjPOnjp03hDazN2qdxiFgMdA_>

# Forensics 1.

** After logging in, you are likely to get an error message of the Recycle bin being corrupted - this is not part of any of the challenges, you can ignore this message. **

This is not the first time you have come across the activities of hackers from a competing company, so you read through all your old notes. Based on this, you think that the attackers could have gained access to the system by taking advantage of a vulnerability in the server. What is the full path to the first file you put on the machine?

(example: hcsc{C:\Folder1..\FolderN\file.name})

# Forensics 2.

After successful access, they were able to execute commands on the server. The most important thing was to avoid detection. What was the first command issued on the server for this purpose?

(example: hcsc{full commandline})

# Forensics 3.

The attackers downloaded a file from the Internet to the server. What was the full URL of the request?

(example: hcsc{https://domain.com/file.name})

# Forensics 4.

The attackers sent files from the machine to their own server, what is the password used for authentication on the attacking machine?

(example: hcsc{password})

# Forensics 5.

The files failed to be exported on the first try. What command did the attackers issue that solved their problem?

(example: hcsc{cmd.exe })

# Forensics 6.

Finally, the files were exported successfully. In what order and what files did the attackers take?

(separated by commas, without space - example: hcsc{nameoffirstfileat.time, nameofsecondfileat.time,...nameoflastfileat.time})

# Forensics 7.

After the successful first attack phase, the attackers returned to the server and took a mailbox with the acquired information. What is the name of the stolen mailbox file?

(example: hcsc{mailbox.file})

# Forensics 8/1.

The attackers wanted to ensure that they could get back to the server at any time, even if the passwords changed in the meantime, so they ensured persistence for the operation of a backdoor. What is the name of the file that creates the persistence? And where was it placed?

(example: hcsc{C:\Folder1..\FolderN\persistence.file})

# Forensics 8/2.

Due to an OPSEC error, we can get sensitive information about hackers, because the malware author forgot to delete something from the persistence file. What should they have deleted?

(example: hcsc{texthiddeninthepersiscencefile})

# Forensics 8/3.

The attackers placed a backdoor on the server. What is the full path of the malware?

(example: hcsc{C:\Folder1..\FolderN\malware.name})

# Forensics 8/3.

The attackers placed a backdoor on the server. What is the full path of the malware?

(example: hcsc{C:\Folder1..\FolderN\malware.name})

# Forensics 8/4.

The execution of the backdoor is triggered by a specific event. What is the name of this event? The start of which process activates the backdoor?

(separated by commas, without space - example: hcsc{PersistenceName, trigger.filename})

# Forensics 9/1.

The User-Agent used for C2 communication is hardcoded in the backdoor, but it is encrypted. What is this agent string decrypted?

(exactly as contained in the malware - example: hcsc{Mozilla/5.0 (X11; Ubuntu; Linux x8664; rv:77.0) Gecko/20100101 Firefox/77.0})

# Forensics 9/2.

The backdoor that was placed did not work properly due to mistake. The attacker placed the malware’s configuration file in the wrong folder. What path does the malware look for this file?

(example: hcsc{C:\Folder1..\FolderN\configfile.name})

# Forensics 9/3.

The encrypted configuration file contains the final flag. What is the decrypted flag?

(example: hcsc{flagText})

# Writeup

[Writeup](WRITEUP.md)
