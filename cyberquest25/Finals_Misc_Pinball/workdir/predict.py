import server
import time
import datetime

import sys

COLORS = ["#ff595e", "#ffca3a", "#8ac926", "#1982c4", "#6a4c93"]

def hex_to_rgb(hex_color):
    """Convert #RRGGBB to (r,g,b) tuple 0-255."""
    hex_color = hex_color.lstrip("#")
    return tuple(int(hex_color[i:i+2], 16) for i in (0,2,4))

def rgb_to_ansi256(r, g, b):
    """
    Map RGB 0-255 to nearest 256-color terminal code.
    Formula: https://jonasjacek.github.io/colors/
    """
    # grayscale 232-255
    if r == g == b:
        if r < 8:
            return 16
        if r > 248:
            return 231
        return round(((r - 8) / 247) * 24) + 232

    # 6x6x6 cube 16-231
    def to_6cube(v):
        return 0 if v < 48 else 1 if v < 115 else int((v - 35) / 40)

    ri, gi, bi = map(to_6cube, (r, g, b))
    return 16 + 36*ri + 6*gi + bi

def ansi_bg(code):
    return f"\x1b[48;5;{code}m"

def ansi_fg(code):
    return f"\x1b[38;5;{code}m"

RESET = "\x1b[0m"


def current_color(t) -> str:
    idx = server.color_service.predict_index(t, window_seconds=2)
    return COLORS[idx]

while True:
    color = current_color(time.time()+5)
    color_next = current_color(time.time()+7)
    r,g,b = hex_to_rgb(color)
    r2,g2,b2 = hex_to_rgb(color_next)
    code = rgb_to_ansi256(r,g,b)
    code2 = rgb_to_ansi256(r2,g2,b2)
    print(f"{ansi_bg(code)}  {code:3} {ansi_bg(code2)} {code2:3}  {RESET}")
    time.sleep(0.1)
    
    