import http.server
import requests
import json
import time
import re
from http.server import ThreadingHTTPServer
from datetime import datetime, timezone

import server

TARGET_BASE = 'http://10.214.1.13:43221'

def rewrite_state(headers, content):
    now = time.time()
    offset = -0.5
    for k, v in headers:
        if k.lower() == "date":
            dt = datetime.strptime(v, "%a, %d %b %Y %H:%M:%S %Z")
            now = float(dt.replace(tzinfo=timezone.utc).timestamp())
    now += offset
    data = json.loads(content)
    pre = server.color_service.predict_index(now+2, window_seconds=2)
    cur = server.color_service.predict_index(now+4, window_seconds=2)
    data["prevColor"] = server.COLORS[pre]
    data["currColor"] = server.COLORS[cur]
    flag = data.get("flag", None)
    if flag is not None:
        print("FLAG:", flag)
    return json.dumps(data)
    
def rewrite_html(headers, content):
    return re.sub(r'<div class="next">\s+<span>Prev</span>\s+<div id="prevColor" class="bubble"></div>\s+</div>', r'<div class="next"><span>Curr</span><div id="prevColor" class="bubble"></div><div id="currColor" class="bubble"></div></div>', content)
    
def rewrite_js(headers, content):
    content = content.replace(r"const prevColorEl = document.getElementById('prevColor');", r"const prevColorEl = document.getElementById('prevColor'); const currColorEl = document.getElementById('currColor');")
    content = content.replace(r"function setPrevBubble(color) {", r"function setPrevBubble(color, color2) { currColorEl.style.background = color2 || '#222';")
    content = content.replace(r"setPrevBubble(data.prevColor);", r"setPrevBubble(data.prevColor, data.currColor);")
    content = content.replace(r"}, 3000);", r"}, 1000);")
    content = content.replace(r"resetBtn.addEventListener('click', async () => {", r"resetBtn.addEventListener('click', async () => { document.cookie = 'sid=; Max-Age=0; path=/; domain=' + location.hostname;")
    return content
    
class ReverseProxyHandler(http.server.BaseHTTPRequestHandler):
    def _relay(self, method):
        target_url = TARGET_BASE + self.path
        headers = {k: v for k, v in self.headers.items()}
        body = None
        if 'Content-Length' in headers:
            length = int(headers['Content-Length'])
            body = self.rfile.read(length)
        try:
            if method == 'GET':
                resp = requests.get(target_url, headers=headers, timeout=5, allow_redirects=False)
            elif method == 'POST':
                resp = requests.post(target_url, headers=headers, data=body, timeout=5, allow_redirects=False)
            else:
                self.send_error(405)
                return
        except requests.RequestException as e:
            self.send_error(502, f'Proxy request error: {e}')
            return

        headers = []
        for k, v in resp.headers.items():
            if k.lower() == "set-cookie":
                v = v.replace("; HttpOnly", "")
            headers.append((k, v))
        content = resp.text
            
        if self.path.startswith("/state") or self.path.startswith("/shoot") or self.path.startswith("/reset"):
            content = rewrite_state(headers, content)
            
        if self.path.startswith("/"):
            content = rewrite_html(headers, content)
            
        if self.path.startswith("/static/game.js"):
            content = rewrite_js(headers, content)

        self.send_response(resp.status_code)
        for k, v in headers:
            if k.lower() not in ('content-length', 'transfer-encoding', 'connection'):
                self.send_header(k, v)
        self.send_header('Connection', 'close')
        self.end_headers()
        self.wfile.write(content.encode())
        self.close_connection = True

    def do_GET(self):
        self._relay('GET')

    def do_POST(self):
        self._relay('POST')

if __name__ == '__main__':
    PORT = 8080
    ThreadingHTTPServer.allow_reuse_address = True
    with ThreadingHTTPServer(('', PORT), ReverseProxyHandler) as httpd:
        print(f'Reverse proxy listening on http://localhost:{PORT}')
        httpd.serve_forever()
