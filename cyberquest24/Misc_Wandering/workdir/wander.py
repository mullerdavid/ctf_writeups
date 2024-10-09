from pwn import remote, log
import time

choices_correct = {
	0: b'The Cave of Wonders',
	1: b'The Forgotten Temple',
	2: b'The Mystic Marshland',
	3: b'The Eerie Graveyard',
	4: b'The Secret Garden',
	5: b'The Lost City',
	6: b"The Siren's Cove",
	7: b'The Dark Abyss',
	8: b'The Cloud Kingdom',
	9: b'The Kingdom of Shadows',
	10: b'The Temporal Garden',
	11: b'The Crystal Caverns',
	12: b'The Forbidden Abyss',
	13: b'The Arcane Archives',
	14: b'The Eternal Glacier',
	15: b'The Wonderland Castle',
	16: b'The Sunken City',
	17: b'The Cosmic Clouds',
	18: b'The Cosmic Cathedral',
	19: b"MJ doesn't have creative challenge ideas",
	20: b'The Infernal Inferno',
	21: b'The Glacial Gorge',
	22: b'The Enigmatic Oasis',
	23: b'The Ghostly Grove',
	24: b'The Elemental Nexus',
	25: b'The Borealis Bridge',
	26: b'The Eldritch Empire',
	27: b'The Ancient Archives',
	28: b'The Shimmering Sands',
	29: b'The Whispering Waterfall',
	30: b'The Legendary Lava Flow',
	31: b'The Starry Sanctuary',
	32: b'The Enchanted Esplanade',
	33: b'The Sapphire Summit',
	34: b'The Mystical Mire',
	35: b'The Covert Cove',
	36: b'The Endless Esker',
	37: b'The Abyssal Asylum',
	38: b'The Midnight Mirage',
	39: b'The Serene Sands',
	40: b'The Starry Stronghold',
	41: b'The Dusk Domain',
	42: b'The Enchanted Echoes',
	43: b'The Ethereal Expanse',
	44: b'The Galactic Garden',
	45: b'The Radiant Ridge',
	46: b'The Serene Swamp',
	47: b'The Fabled Forest',
	48: b'The Elemental Enigma',
	49: b'The Celestial Citadel',
	50: b'The Astral Archives',
	51: b'The Whimsical Woods',
    52: b'The Ethereal Echoes',
    53: b'The Celestial Cove',
}
choices_correct = {}
choices_bad = {}

line = [b"While wandering around, you bump into these three options...", b"You find yourself at a crossroad. Which way will you go next?", b"Game over! You didn't follow the correct path."]

while True:
    i = 0
    selected = ""
    try:
        r = remote("10.10.1.12",39145,level='error')
        log.info("Opening connection")
        r.recvline_startswith(line)
        for _,selected in choices_correct.items():
            log.info(f"[{i}] Known good choice: {selected}")
            r.sendline(selected)
            r.recvline_startswith(line)
            i += 1  
        while True:
            options = set(r.recvline()[1:-2].split(b" | "))
            if i in choices_bad:
                options = options.difference(choices_bad[i])
            selected = next(iter(options))
            log.info(f"Options: {options}, Selected: {selected}")
            r.sendline(selected)
            l = r.recvline_startswith(line, timeout=3)
            if b"Game over!" in l:
                r.close()
                break
            log.info(f"[{i}] Good choice: {selected}")
            choices_correct[i] = selected
            i += 1        
    except EOFError:
        l = r.clean()
        if b"Game over!" not in l:
            log.success(l.decode())
            break
    log.info(f"[{i}] Game over: {selected}")
    if i not in choices_bad:
        choices_bad[i] = set()
    choices_bad[i].add(selected)
    #time.sleep(0.1)
