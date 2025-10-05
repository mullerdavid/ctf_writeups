import socket
import re
import sys
import select
import time
import tty
import termios
import threading

HOST = "10.10.100.113"
PORT = 29536

sock = None

directions = {
    "w": "10",
    "a": "12",
    "s": "11",
    "d": "13",
}

def key_listener():
    global sock

    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    tty.setcbreak(fd)

    try:
        while True:
            dr, _, _ = select.select([sys.stdin], [], [], 0)
            if dr:
                key = sys.stdin.read(1)
                if key in directions.keys():
                    frame_to_send = f"< send 456 1 {directions[key]} >"
                    print(frame_to_send)
                    sock.sendall(frame_to_send.encode('utf-8'))
            time.sleep(0.05)
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    
def main():
    global timestamp_diff, sock
    
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((HOST, PORT))
    
    sock.sendall(b"< open can0 >")
    sock.sendall(b"< rawmode >")
        
    threading.Thread(target=key_listener, daemon=True).start()
    buffer = ""

    while True:
        data = sock.recv(1024)
        if not data:
            break
        incoming = data.decode('utf-8')
        print(incoming.replace(">", ">\n"), end="")
        
if __name__ == "__main__":
    main()