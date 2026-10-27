# VM intro
0 PTS

NexaCore Technologies

Nexacore is a leading IT technology company that is a pioneer in the field of research into new security solutions. They experiment with the most modern methods of automation in their own internal laboratory, trying to incorporate all new developments into their workflow.

Their latest development is a project they plan to showcase at this year's IT Security conference. Their research results have left them extremely exposed, and the company is constantly being targeted by cyberattacks.

You and your colleagues have assisted in forensic investigations several times, and now you are asked to investigate an unpleasant incident. Part of the case has already been solved, and it is your task to find out all the missing details.

The first phase of the attack has been investigated; you need to deal with the second phase. After gaining entry, the attackers found one of the development lab machines as a result of the internal recon process and managed to enter it from the LAN network.

Examine the machine and answer the customer's questions.

Letöltési útmutató: https://cdn.hcst.hu/README-2026.md

A visszefejtéshez szükséges jelszavak:

HCSC-2026.7z: HCSC-2026.7z_LsRRjPVkGSaITka0UZIBEuft8hOvZd8PKH6rj6XW7jusPzuTXI6Nf1AwhvFYiWjfCAm2uQTo8L90oYqBulB2b9MoVvfJ7Z25

HCSC-2026.tar.gpg: HCSC-2026.tar.gpg_6SOgxqd9oD38o07LwHfabgm2UsWe2BQEysewXugowmROqAGjWevZUeVnNhN6qW7M3fJ0eTKWJ37oi4XkyzgkzTg1effRnTis

HCSC-2026.tar.age: HCSC-2026.tar.age_oSJEfSq5Z2ytfagvlTxq7sS8zPjE8NJFfuPKkVcakuuiqYYAhBWtQ7fQN5M1RQ6Jo4vU2MwXkNj46mcYXNb1743kNea9srwJ

A feladatokhoz writeup beküldése szükséges a hcsc@nki.gov.hu e-mail címre. Template csatolva.

Egyes VMes forensic feladatok között van összefüggés. Ha a leírásból valami nem egyértelmű, érdemes megnézni az előző feladatokat.

As an alternative, it is also hosted here: [SharedFiles](/SharedFiles.md) in the `hcsc26 > hcsc2026_defense_VM` subfolder.

# VM 1
250 PTS

There is a vulnerable application running on that machine, probably the initial access of the second phase. The flag is the name of the vulnerable application with version and the CVE number of the vulnerability exploited on the machine.

example: hcsc{applicationX.X_CVE-XXXX-XXXX}

# VM 2
300 PTS

The attacker has an extremely good sense of humor. He issued commands to gather information through the channel obtained through a successful exploit. He used custom User-Agent strings for this, 4 different ones. The flag is the second distinct user-agent string used for the biggest package in size and the full command issued.

example: hcsc{custom_user_agent_string_command argument}

# VM 3
300 PTS

First attempt to escalate privilege failed. Give me the URL from where the exploit was downloaded to the disk and the full path from where it was executed. (And failed to escalate:))

example: hcsc{hxxps://domain.ext/path/to/exploit.ext_/path/on/disk/file.ext}})

# VM 4
300 PTS

This first attempt to elevate privileges failed several times in a row, and the error message thrown makes it clear why. The targeted vulnerability was patched onto the system. (However, according to the documentations, the version of the binary is tagged as vulnerable😊) What was the error message, the name of the targeted binary and the version of it?

example: hcsc{user : error message of the failure_binary_X.X.XXpX}

# VM 5
200 PTS

During internal recon, the attacker has found something very valuable, which gives her access to the system via another protocol. When did the attacker first log into the machine with the acquired authentication option? From what IP address?

example: hcsc{YYYY-MM-DD_HH:MM:SS_xxx.xxx.xxx.xxx}

# VM 6
350 PTS

The privilege escalation problem still remains to be solved. Through the new protocol, the attacker continued to search the system and found a file, which (s)he modified to eventually gain root privileges. Give me the full path of this modified file.

example: hcsc{/path/to/file}

# VM 7
300 PTS

After the modification mentioned in flag6 – when the attacker gain root shell for the first time? Give me the timestamp of the root session opened, the name of the process the session belongs to and the PID of this process.

example: hcsc{YYYY-MM-DD_HH:MM:SS_process_PID}

# VM 8
250 PTS

Our developer received an email from a friend about a tool they use regularly that makes their work much easier. He kindly sent a link where he could download it and try it out. Unfortunately, it later turned out that although his friend sent it with good intentions, the device also performed certain "side activities." The flag is the full download URL, and the source IP address.

example: hcsc{hxxps://download.domain.ext:port/path/to/file.ext_xxx.xxx.xxx.xxx}

# VM 9
300 PTS

From the previous challange, the downloaded file is an application. What was the extension ID after installation?

example: hcsc{extensionID}

# VM 10
350 PTS

The downloaded and installed tool after installation steals the data it manages and forwards it to an attacker's domain. Two files contain the domain name where the stolen data is leaked. The flag is these two filenames in alphabetical order (case insensitive) and the domain name - subdomain included.

example: hcsc{filename1.ext_filename2.ext_sub.domain.ext}

# VM 11
500 PTS

The company’s flag ship is a secret security project called Quantum-Mesh Adaptive Security Framework (QMASF) Smart Home IoT Security Architecture and that is not the first time someone tries to put their hands on. The company is constantly under attack. But this time our dev gave them what they wanted without asking. He uploaded 2 important pdf files to this stealer extension. Give me the filenames of the 2 processed PDF in the flag in alphabetic order – case insensitive.

example: hcsc{File Name.pdf_other-file-name.pdf}

# VM 12
350 PTS

Next, the malicious actor installed a tool and registered it as a service, in case the previous methods are detected by the security team. It was planned to serve as a c2 channel. Give me the name of the malicious process running as a service, the Description value of the service and the full path of the file, containing the credential of this c2 client, which is used to authenticate to his server part.

example: hcsc{proc-run_Name In The Description_/path/to/cred-file.ext}

# VM 13
500 PTS

As the main lab application had no logging feature for the input and output data, our developer has created two custom components to make it possible to track the flows. We are sure that the logfiles produced by these components were stolen and leaked with all conversations stored in. Could you find all of them, as hackers did? These are 6 files, but 2 of them have the same filename. Give me just the 5 distinct filenames in alphabetical order.

example: hcsc{file_1.ext_file_2.ext_file3.ext_file4.ext_file5.ext}

# VM 14
250 PTS

Unfortunately, our developer carelessly left the OpenAI API key in plain text in a few places... The flag is this key.

example: hcsc{this-is-the-long_api_key}

# VM 15
500 PTS

A serious security incident occurred at Nexacore on Februar 12, 2026. The incident report file was processed several times in the lab. There is an easier and harder way to tell what the attackers' IP address was and what the compromised user's email address was.

example: hcsc{xxx.xxx.xxx.xxx_name@domain.ext}


