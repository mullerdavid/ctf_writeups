# Challenge

A virtual machine image was distributed with multiple challenges for a forensics investigation.

The VM files are hosted here: [SharedFiles](/SharedFiles.md) in the hcsc24 subfolder.

# Forensic intro

You are employed by HCSC Corporation as an IT Security Analyst. The system administrator running the central office sends you a virtualized domain controller for examination because it is suspected that the machine has been compromised.

As in 2021 the company was hit by a serious attack, everybody is very vigilant, watch out for suspicious signs. Some weeks ago, the junior sales assistant, Jimmie Benjamin called the IT Helpdesk, because he has found 2 files on his desktop, that - he was very sure about the fact - has never seen before. The administrator asked him to submit these files for review. Shortly after his machine produced a BSOD and could not boot up anymore, the forensic expert team is working on it for the moment. It is suspected that some malicious actors achieved to step their feet in the door...

Your task is to investigate how deeply the system was compromised and how the hackers maintain their access to the organization’s resources.

Defense VM resource requirements:

6 GB RAM Min. 50GB storage space VMware Workstation Player 17

Local Administrator login credentials: User: player Password: Hcsc2024

Flags accepted as case insensitive (unless otherwise stated), format examples always given in challenge description.

Forensic VM flags require a writeup, template provided here. Read the instructions, send only once!

# Forensic 1.

Just to warm up your skills, you take a tour on the machine. The admin has told something about an attack in 2021. In his letter there are some details:

“In 2021 the 5th of November, we had a successful attack from IP address 246.10.27.233, an admin account was compromised because of the lack of Two factor authentication. The attacker finally, after several attempts could answer the security question of the compromised user.”

What was that security question?

\(example: `hcsc{Security question with spaces and question mark?}` - case sensitive)

# Forensic 2.

Jimmie Benjamin submitted 2 suspicious files found on his desktop before his machine died. The admin collected them and put on the DC’s desktop, in a password protected 7z file. The password is: suspected.

What is the original name of the exe file?

When the pfx file’s actual content was created by the attacker (days/month/year\_hours:minutes:seconds)?

\(example: `hcsc{origname.exe\_dd/mm/yyyy\_hh:mm:ss}`)

# Forensic 3.

The malicious actors used this tool to find something to exploit. And…they were lucky. What have they found? What is the name of the vulnerable template and what is the name and the value of the exploitable attribute?

\(example: `hcsc{TemplateName\_name-of-attribute\_VALUE\_OF\_ATTRIBUTE}`)

# Forensic 4.

The attacker manipulated the Registry to handle some UAC restrictions. What is the full path of the modified registry value and which is the privileged user account taken over by the attacker and used to take this action?

\(example: `hcsc{HKXX\full\registry\path\To\The\Value\_privuser}`)

# Forensic 5.

You are wondering, how this privileged account was taken over exactly? You already have some pieces of the puzzle, lets put them together to see the whole picture. Keeping in mind the exploited vulnerability found in challenge 3 and the name of the privileged user account found in challenge 4 you should be able to find a thumbprint which will identify the tool used for that privilege escalation.

\(example: `hcsc{xx xx xx xx xx xx xx xx xx xx xx xx xx xx xx xx xx xx xx xx}` – 20 hex separated by spaces)

# Forensic 6.

Which service/protocol was used by the attacker to run commands remotely on the DC? Through which port? What is the IP of the attacker machine?

\(example: `hcsc{serviceShortName\_port\_remoteIPv4}`) – case insensitive

# Forensic 7.

After a successful first attack phase, hackers worked to create some kind of persistence and functionality that would lead them to their goal. Let’s go to hunt for loaders, trojans and payloads! First we need a loader, what is the full path where it was copied to and its original name?

\(example: `hcsc{C:\path\to\loader.exe\_origname.extension}`)

# Forensic 8.

Have you tried to figure out what our loader is loading actually? It seems to be tricky… So, let’s hunt down that mystery! Where is our trojan and how it is loaded? How it persists to realize regular data theft?

\(example: `hcsc{FULLPATH\OF\THE\KEY\OF\PERSISTENCE\_C:\Path\to\trojan.ext}`

# Forensic 9.

We need to know what the payload of the malware contains, what it does exactly, so it’s time to reverse engineering a bit.

There is a flag inside the malware – yes, in flag format.

# Forensic 10.

Have a closer look to the payload! Its goal is to help the attackers to steal sensitive and valuable data. They have found a way out, unfortunately. Can you tell the management, what was stolen? What was the IP address, where the data went out? And exactly when (to hours and minutes)? What was the name of the first file stolen?

\(example: `hcsc{dest.IP.v.4\_YYYY-MM-DD-hh-mm\_First\_Stolen\_Filename.ext}`)

Attention! The Time is in UTC (hours)!!!

# Forensic 11.

The Sysadmin calls you to ask, how the investigation is going on. He is pushed by the Management to take actions. He asks you, what if he changes everyone’s password in the company? Would that close out the attackers?

You already know the answer, don't you?

If the admin changes every password on 01/05/2024, - taking in count the actual state of the system - theoretically what is the last day, when the attackers are able to authenticate to the organization? As which account?

\(example: `hcsc{MM/DD/YYYY\_account}`) American date form!

# Forensic 12.

Almost done. Have you thought about everything? Did you look everywhere? What if they had created something, that they did have not used yet? Anyway… Could you find something, that the attackers created, but not used yet and could give them the key of the kingdom in the next step?

\(example: `hcsc{accountName\_FQDN.to.impersonate\_CVE-exploited-for}` )


# Writeup

[Writeup](WRITEUP.md)
