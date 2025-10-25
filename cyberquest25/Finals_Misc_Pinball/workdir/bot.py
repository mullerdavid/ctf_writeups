import requests
import time
import math
import random
from datetime import datetime, timezone

import server

TARGET_BASE = 'http://10.214.1.13:43221'

session = requests.Session()
# session.cookies.set('sid', 'b9c651d80e2a4dc6b3f7e128da7100e9') # fixate to view on UI

state = {}
server_diff = 0

def to_bubbles(board):
    grid = [[server.Bubble(color=c) if c is not None else None for c in row] for row in board]
    return grid

def predict_color(offset):
    idx = server.color_service.predict_index(time.time()+server_diff+offset, window_seconds=2)
    return server.COLORS[idx]
 
def update_state(response):
    global state
    global server_diff
    state.update(response.json())
    date_str = response.headers.get("Date", None)
    if date_str is not None:
        date = datetime.strptime(date_str, "%a, %d %b %Y %H:%M:%S %Z")
        server_now = float(date.replace(tzinfo=timezone.utc).timestamp())
        client_now = time.time()
        server_diff = server_now - client_now

def get_state():
    global session
    r = session.get(f'{TARGET_BASE}/state')
    update_state(r)

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

def ansi_reset():
    return "\x1b[0m"
    
def print_board_bg(*pairs):
    if len(pairs) == 0 or len(pairs) % 2 != 0:
        raise ValueError("print_board_bg() requires pairs: (board, predict_color)")

    num_boards = len(pairs) // 2
    boards = pairs[0::2]
    predicts = pairs[1::2]

    if not all(isinstance(b, list) and b and isinstance(b[0], list) for b in boards):
        print("Invalid board data")
        return

    rows = len(boards[0])
    cols = len(boards[0][0])

    predict_codes = []
    for pred in predicts:
        r, g, b = hex_to_rgb(pred)
        code = rgb_to_ansi256(r, g, b)
        predict_codes.append(code)

    for r_idx in range(rows):
        lines = []
        for b_idx, (board, pred_code) in enumerate(zip(boards, predict_codes)):
            line = ""
            row = board[r_idx]
            for c_idx, cell in enumerate(row):
                if r_idx == rows - 1 and (cols // 2 - 1 <= c_idx <= cols // 2):
                    line += f"{ansi_bg(pred_code)} {ansi_reset()}"
                elif cell is None:
                    line += " "
                else:
                    r, g, b = hex_to_rgb(cell)
                    code = rgb_to_ansi256(r, g, b)
                    line += f"{ansi_bg(code)} {ansi_reset()}"
            lines.append(line)
        print(" | ".join(lines))
    print()


def shoot(angle_deg):
    global session
    payload = {'angleDeg': angle_deg}
    req = session.post(f'{TARGET_BASE}/shoot', json=payload)
    state = req.json()
    limit = state.get("rateLimited", False)
    if limit:
        wait = state.get("retryAfterMs")
        time.sleep(wait/1000)
        if 100<limit:
            return
        req = session.post(f'{TARGET_BASE}/shoot', json=payload)
    update_state(req)
    
def reset_board():
    global session
    r = session.post(f"{TARGET_BASE}/reset")
    update_state(r)

def _debug_plan(header, shot1=None, shot2=None, total=None):
    """Print debug header + shots + separator (after board)"""
    print(f"[DEBUG] {header}")
    if shot1:
        print(f" Shot 1 : {shot1[0]:5.1f}° -> Pop: {shot1[1]:2d} (immediate)")
    if shot2:
        print(f" Shot 2 : {shot2[0]:5.1f}° -> Pop: {shot2[1]:2d} (future)")
    if total is not None:
        print(f" TOTAL : {total:2d} bubbles")
    print()
    print("-" * 32)


last_plan = None  # (angle2, pop2, board_after2, color_next)

def find_target_angle():
    global last_plan
    board = state.get('board', [])
    if not board:
        return 90.0

    def to_bubbles(b):
        return [[server.Bubble(color=c) if c is not None else None for c in row] for row in b]

    grid = to_bubbles(board)
    color_now, color_next = predict_color(0), predict_color(1)
    CENTER, STEPS = 90.0, 20

    angles = [CENTER]
    for s in range(1, STEPS + 1):
        l, r = CENTER - s, CENTER + s
        if l >= server.MIN_ANGLE_DEG: angles.append(l)
        if r <= server.MAX_ANGLE_DEG: angles.append(r)

    if last_plan and board == state.get('board', []):
        angle2, pop2, board_after2, _ = last_plan
        print_board_bg(board, color_now, board, color_next, board_after2, predict_color(2))
        _debug_plan("HONOURING SAVED FUTURE PLAN", shot2=(angle2, pop2))
        last_plan = None
        return angle2

    best_key = (-1, -1, 0, None)
    best_plan = None

    for angle1 in angles:
        g1 = [row[:] for row in grid]
        res1 = server.simulate_shot(g1, angle1, color_now, server.GameState())
        pop1 = res1.get('popped', 0)
        board1 = server.export_board(g1)

        g2_base = to_bubbles(board1)
        best_pop2 = best_board2 = best_angle2 = None
        for angle2 in angles:
            g2 = [row[:] for row in g2_base]
            res2 = server.simulate_shot(g2, angle2, color_next, server.GameState())
            pop2 = res2.get('popped', 0)
            if pop2 > (best_pop2 or -1):
                best_pop2, best_board2, best_angle2 = pop2, server.export_board(g2), angle2

        total = pop1 + (best_pop2 or 0)
        key = (1 if pop1 > 0 else 0, pop1, total, -abs(angle1 - CENTER))

        if key > best_key:
            best_key = key
            best_plan = (angle1, pop1, board1, best_angle2, best_pop2, best_board2)

    if not best_plan:
        g = [row[:] for row in grid]
        server.simulate_shot(g, 90.0, color_now, server.GameState())
        board_after = server.export_board(g)
        print_board_bg(board, color_now, board_after, color_next, board_after, predict_color(2))
        _debug_plan("No immediate pop -> forcing 90°")
        return 90.0

    a1, p1, b1, a2, p2, b2 = best_plan

    if p1 == 0:
        print_board_bg(board, color_now, b1, color_next, b2, predict_color(2))
        _debug_plan("NO IMMEDIATE POP -> SAVING FUTURE PLAN",
                    shot1=(a1, 0), shot2=(a2, p2))
        last_plan = (a2, p2, b2, color_next)
        return a1

    last_plan = None
    print_board_bg(board, color_now, b1, color_next, b2, predict_color(2))
    _debug_plan("BEST 2-SHOT PLAN (stateful)",
                shot1=(a1, p1), shot2=(a2, p2), total=p1 + p2)
    return a1

def play_loop():
    global state
    while True:
        get_state()
        if state.get('timeRemaining', 0) <= 0:
            print('Game over, restarting soon...')
            time.sleep(2)
            shoot(90)
            continue
        print(f'Score: {state.get("score", 0)} Time: {state.get("timeRemaining", 0)}')
        if "flag" in state.keys():
            print(f'FLAG: {state.get("flag")}')
        angle = find_target_angle()
        shoot(angle)
        time.sleep(0.9)

if __name__ == '__main__':
    play_loop()
