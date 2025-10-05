from http.server import HTTPServer, BaseHTTPRequestHandler

class LoggingHandler(BaseHTTPRequestHandler):
    def _log_request(self):
        print(f"\n=== Incoming {self.command} request from {self.client_address} ===")
        for header, value in self.headers.items():
            print(f"{header}: {value}")

        if self.command in ["POST", "PUT"]:
            content_length = int(self.headers.get('Content-Length', 0))
            body = self.rfile.read(content_length) if content_length > 0 else b''
            if body:
                print("\n--- Body ---")
                print(body.decode(errors="replace"))
                print("------------")

    def do_GET(self):
        self._log_request()
        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"OK\n")

    def do_POST(self):
        self._log_request()
        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"OK\n")

    def do_PUT(self):
        self.do_POST()
        
    def do_DELETE(self):
        self.do_GET()

if __name__ == "__main__":
    server = HTTPServer(("0.0.0.0", 8888), LoggingHandler)
    print("Serving on http://0.0.0.0:8888")
    server.serve_forever()