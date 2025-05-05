# Challenge

A virtual machine image was distributed with multiple challenges for a forensics investigation.

The VM files are hosted here: [SharedFiles](/SharedFiles.md) in the hcsc25 subfolder. TODO: add files

# Context of the challenge

You work as a system administrator at a new startup company. There are a lot of talented people with new ideas but not enough money yet, it is just emerging, trying to make its place in the market. In the past year, some promising research has started, but suddenly a competing company comes up with your ideas, seemingly out of nowhere. Your boss suspects that they somehow got their hands on the research results. He asked you to carefully review the system to see if you could find any clues that would confirm market espionage. After a few days of research, you discover that unfortunately, you can connect to your WIFI device even from under the window on the street and that its password is extremely weak, so it was possible to attack the machines on the network from the inside. You decide to first examine the Debian server that performs authentication, since the attack flow had to pass through that.

# Forensic 1. 

Just to warm up your skills, could you tell me the phone number of user tenders? And there are some other important notes about him...

Flag format: `hcsc{...}`

# Forensic 2. 

Your boss suspects an insider, thinks one of your employees helped the competing company, but you doubt it. After all, you even created a warning message at the time, which is displayed every time a user logs in, explaining the consequences if someone doesn't follow the rules.)

Flag format: `hcsc{...}`

# Forensic 3. 

During the investigation you have found a credential used to get email notifications. What is the email address and its password?

Flag format: `hcsc{email.email@addr.ess_password}`


# Forensic 4.

You wonder how the system was hacked? The intruder should have found a vulnerable service on your server, exploited it and created a subscription for a device. What is the name of that device?

Flag format: `hcsc{full_registered_name_of_the_device}`

# Forensic 5.

If we look closely, this was the second attempt, the attacker had previously tested this exploit. What is the name of the first registered device and when did the first attempt occur? (dd_MM_YYYY)

Flag format:` hcsc{full_registered_name_of_the_device_DD_MM_YYYY}`

# Forensic 6.

Once inside, the attacker looked around on the server for an opportunity to escalate privileges. To do this, (s)he downloaded a tool from the Internet and forwarded its output to the attacker's machine. What is the filename of this recon binary? (full path) In the name of which user was it run? What is the name of its output file? (full path)

Flag format: `hcsc{/full/path/tool_username_/output/file.name}`

#  Forensic 7.

Hackers processed the information gathered in the previous phase and unfortunately figured out how to step further in stage 2. It seems that our attacker has found a way to elevate his privileges enough to export a highly sensitive file, that will allow him to consolidate his power in the kingdom. What is the original name of the exported file (full path) and under what name did (s)he export it (full path)?

Flag format: `hcsc{/full/path/of/sensitive/file_/full/path/copied.to}`

# Forensic 8.
The attacker used the stolen file to generate a certificate that allowed him to log in as a high-privileged user. What is the attacker's username, the impersonated username, and the sha256 fingerprint of the generated certificate (in base64 format)??

Flag format: `hcsc{attackeruser _impersonateduser_sha256inbase64}`

# Forensic 9.

The next step was to drop a file onto the machine that contained the beacon that would provide command and control communications. What is the full path of the dropped beacon?

Flag format: `hcsc{full/path/to/dropped/beacon.ext}`

# Forensic 10.

Some other strange action was taken by the attacker, related to the dropped beacon. This malware needs to be run somehow, right? What is the full path of the binary that decrypt the beacon and load it? What is the encryption key used by this binary to unpack the beacon (hex format without leading 0x)?

Flag format: `hcsc{/full/path/to/loader_XXXXXXXX}`

# Forensic 11.

This tricky loader is hiding something. Your static analysis gives some details but that is not enough. Where is the piece of code that creates the reverse connection to the attacker? And how is it activated? In the first part of the flag, give me the full path of the decrypted beacon. For the second part, please take a closer look at interesting hobbies. There is a user who is deeply interested in tiny houses. List the names of all users who provide the same identity as him when connecting to the c2 server - domain and local users - in alphabetical order, including the identity itself!

Flag format: `hcsc{/full/path/of/beacon_user1_user2…_userN}`

# Forensic 12.

Almost done. As the final act our attacker took the files he needed. Which ones were stolen? Give me the exfiltrated filenames in alphabetical order...

Flag format: `hcsc{file1.ext_file2.ext…fileN.ext}`

# Writeup

[Writeup](WRITEUP.md)
