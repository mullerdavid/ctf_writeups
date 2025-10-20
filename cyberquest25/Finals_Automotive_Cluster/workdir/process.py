import re, glob

class CANFrame:
    def __init__(self, timestamp, interface, can_id, data):
        self.timestamp = timestamp
        self.interface = interface
        self.can_id = can_id
        self.data = data
    def __repr__(self):
        return f"<CANFrame {self.timestamp:.6f} {self.interface} {self.can_id:X} {self.data.hex().upper()}>"

pattern = re.compile(r"\(([\d.]+)\)\s+(\S+)\s+([0-9A-Fa-f]+)#([0-9A-Fa-f]+)")
frames = []

for fn in glob.glob("can[0-2].dmp"):
    with open(fn) as f:
        for l in f:
            m = pattern.match(l)
            if m:
                ts, iface, cid, data = m.groups()
                frames.append(CANFrame(float(ts), iface, int(cid, 16), bytes.fromhex(data)))

frames.sort(key=lambda x: x.timestamp)


for f in frames:
    if f.can_id==0x261 or f.can_id==0x263:
        print(bytes((b + 8) & 0xFF for b in f.data))
