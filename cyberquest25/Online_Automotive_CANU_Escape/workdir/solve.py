import json
import re
import os
import select
import socket
import sys
import termios
import threading
import time
import websocket

from collections import deque

HOST = "10.10.100.113"
PORT_WEB = 8080
PORT_CAN = 29536

def cls():
    print("\033[H\033[J", end="")
    
def print_maze(maze):
    for row in maze:
        print("".join(row))

def find_char(grid, ch):
    for r, row in enumerate(grid):
        for c, val in enumerate(row):
            if val == ch:
                return (r, c)
    return None

def solve_maze(maze_lines):
    grid = [list(row) for row in maze_lines]
    R = len(grid)
    C = len(grid[0]) if R > 0 else 0

    start = find_char(grid, 'C')
    goal = find_char(grid, 'E')
    if not start or not goal:
        raise ValueError("Start 'C' or goal 'E' not found")

    # BFS, order: Up, Down, Left, Right, affects tie-breaking
    directions = [(-1,0,'U'), (1,0,'D'), (0,-1,'L'), (0,1,'R')]
    walkable = set([' ', '+', 'C', 'E'])
    q = deque([start])
    parent = {start: None}
    move_from_parent = {}

    found = False
    while q:
        r,c = q.popleft()
        if (r,c) == goal:
            found = True
            break
        for dr,dc,mv in directions:
            nr, nc = r + dr, c + dc
            if 0 <= nr < R and 0 <= nc < C:
                if (nr,nc) not in parent and grid[nr][nc] in walkable:
                    parent[(nr,nc)] = (r,c)
                    move_from_parent[(nr,nc)] = mv
                    q.append((nr,nc))

    if not found:
        return None

    moves = []
    cur = goal
    while cur != start:
        mv = move_from_parent[cur]
        moves.append(mv)
        cur = parent[cur]
    moves.reverse()
    return moves

state = None

def thread():
    global state
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((HOST, PORT_CAN))
    sock.sendall(b"< open can0 >")
    sock.sendall(b"< rawmode >")
    directions = {
        "U": "10",
        "D": "11",
        "L": "12",
        "R": "13",
    }
    while True:
        if state is None:
            pass
        elif state["data"]["completed"]:
            print(state["data"]["flag"])
            os._exit(0)
        else:
            cls()
            maze = state["data"]["maze"]
            print_maze(maze)
            moves = solve_maze(maze)
            for m in moves:
                frame_to_send = f"< send 456 1 {directions[m]} >"
                # print(frame_to_send)
                sock.sendall(frame_to_send.encode('utf-8'))
        time.sleep(0.5)

            

def on_message(ws, message):
    global state
    state = json.loads(message)

if __name__ == "__main__":
    ws = websocket.WebSocketApp(f"ws://{HOST}:{PORT_WEB}/ws", on_message=on_message)
    t = threading.Thread(target=thread)
    t.start()
    ws.run_forever() 
    
if __name__ == "__main__":
    main()