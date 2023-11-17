# Checking the site

The website has QR code on the index page.

![](files/image.png)


# QR code

The code is not really recognized. Inverting the color helps.

```bash
convert image.png -channel RGB -negate inverted.png
zbarimg inverted.png
```

```
WIFI:S:bbehind_the_scenes;T:WPA;P:NearToTheSolutionButPWNotEnoughToGetItTryMoreHarder;CQ23{nothing-extra-here-but-now-still-there};
```

# Flag
CQ23{nothing-extra-here-but-now-still-there}
