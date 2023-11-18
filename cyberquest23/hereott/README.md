# Challenge

Watch spoopy horror movies directly on your sofa, literally from a button press away! Our new [OTT](https://en.wikipedia.org/wiki/Over-the-top_media_service) platform now comes with Android support. Not a customer yet? Subscribe today!

> Remarks from the author:
> * the challenge requires no brute-forcing
> * no physical Android device is required to solve this challenge
> * you need to download the provided hereott.apk file to start the challenge
> * the app does nothing harmful, you may run it on any device if you feel like that's required
> * VPN connection is required
> * Current sha256sum of the APK: `d7a5c3e48c12e5989b0e3c5aeb7650dc1e3e21d65bd67fe376734d9828f3e008`
> * the challenge runs on a single port

Might be useful:
* https://github.com/skylot/jadx
* https://developer.android.com/studio/run/emulator
* https://apktool.org/
* https://frida.re/docs/android/
* https://stuff.mit.edu/afs/sipb/project/android/docs/tools/help/logcat.html
* https://play.google.com/store/apps/details?id=net.openvpn.openvpn&hl=en&gl=US

**Flag format**: `cq23{...}`

*By MJ - Contact me on Discord with the same nick if you think you found an issue or open a ticket in #help-tickets.*

[hereott.apk](files/hereott.apk)

<details>
  <summary>Hints</summary> 
  
The challenge is around 3632 lines of code. Do you
think that static analysis is the way to go? Maybe its a
web challenge after all ... it's always erroring tho. Why is
that?
</details>

<details>
  <summary>Hints -90</summary> 

Did you intercept the calls yet? I see some STB involved. It looks like I need to own one personally in order to progress. Or maybe not? Blind poking is best when the other party is talkative enough. ;) It all comes down to headers and footers. And a little bit of luck.

</details>

# Bonus

This is not a challenge, just a tiny side quest. Figure out
what does the serial remind you of in the Here OTT
challenge. It helps if you start with Here OTT
beforehand, but it's not a must to find the flag for that
one. If you give me a precious answer, I will reward you
with 25 points.

Flag format: Doesn't exist, type the guess as it is

# Writeup

[Writeup](WRITEUP.md)
