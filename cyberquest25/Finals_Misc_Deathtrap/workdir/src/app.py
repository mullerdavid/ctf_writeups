from flask import Flask, request, render_template_string
import subprocess

app = Flask(__name__)

ALLOWED_COMMANDS = ["pwd", "whoami", "ls", "ping"]

HTML = """
<!doctype html>
<html>
<head><meta charset="utf-8"><title>IT's a trap</title></head>
<body style="font-family:sans-serif; max-width:600px; margin:2rem auto;">
  <h2>What can you do here?</h2>
  <form method="post" action="/">
    <label>Input:</label><br>
    <input type="text" name="cmd" style="width:100%; padding:6px;">
    <br><br>
    <input type="submit" value="Submit">
  </form>
  {% if output is defined %}
    <h3>Output:</h3>
    <pre style="background:#f4f4f4; padding:8px; border-radius:6px;">{{ output }}</pre>
  {% endif %}
</body>
</html>
"""

@app.route("/", methods=["GET", "POST"])
def index():
    output = ""
    if request.method == "POST":
        cmd = request.form.get("cmd", "").strip()
        if not cmd:
            output = "Try again"
        else:
            cmd_name = cmd.split()[0]
            if cmd_name not in ALLOWED_COMMANDS:
                output = f"Try again"
            else:
                try:
                    result = subprocess.run(cmd.split(), capture_output=True, text=True, timeout=5)
                    output = result.stdout or result.stderr or "Try again"
                except Exception as e:
                    output = f"Error: {e}"
    return render_template_string(HTML, output=output)

@app.route("/image")
def show_image():
    return render_template_string("""
    <!doctype html>
    <html>
        <body>
            <img src="{{ url_for('static', filename='supadoopaflag.jpg') }}">
        </body>
    </html>
    """)

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=8080, debug=True)