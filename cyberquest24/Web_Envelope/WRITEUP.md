# Checking the site

There is no website or webserver here. 

This challenge should not be in the web category.

# SVG

This is a simple SVG file and there are a few text nodes inside which gives the flag.
 * `C`
 * `Q`
 * `24`
 * `{sVg_f`
 * `0r_V3`
 * `cT00r}`

```
<g id="_x39_d8576fc-cada-46d1-863b-5ee1901404c7">
    <g class="cls-4">
    <g class="cls-4">
        <text class="cls-3" transform="translate(545.3 343.2)"><tspan x="0" y="0" xml:space="preserve">C  </tspan></text>
    </g>
    </g>
</g>
<g id="_x33_0412c3b-1278-4270-ad77-e8f0ac4c5e96">
    <g class="cls-4">
    <g class="cls-4">
        <text class="cls-2" transform="translate(542.4 393.9)"><tspan x="0" y="0">Q</tspan></text>
    </g>
    </g>
</g>
<g id="a6a8630f-83a1-4922-b7e6-7f7ba585687b">
    <g class="cls-4">
    <g class="cls-4">
        <text class="cls-1" transform="translate(538.3 456)"><tspan x="0" y="0">24</tspan></text>
    </g>
    </g>
</g>
<g id="_x35_245c0c4-cd71-46f0-a807-3da31c12001d">
    <g class="cls-4">
    <g class="cls-4">
        <text class="cls-3" transform="translate(505.8 509.8)"><tspan x="0" y="0">{sVg_f</tspan></text>
    </g>
    </g>
</g>
<g id="c039802b-a193-411f-9a77-067c36aef6b6">
    <g class="cls-4">
    <g class="cls-4">
        <text class="cls-3" transform="translate(487.3 668.5)"><tspan x="0" y="0">0r_V3</tspan></text>
    </g>
    </g>
</g>
<g id="e597730e-54a0-450d-999f-c64153582ac6">
    <g class="cls-4">
    <g class="cls-4">
        <text class="cls-3" transform="translate(481.6 752.4)"><tspan x="0" y="0">cT00r}</tspan></text>
    </g>
    </g>
</g>
```

Removing all the non-text nodes makes it visible in the modified [Envelope.svg](workdir/Envelope.svg)

# Flag

CQ24{sVg_f0r_V3cT00r}