package main

import (
	"context"
	"fmt"
	"io"
	"log"
	"math/rand"
	"net/http"
	"os"
	"os/exec"
	"regexp"
	"strings"
	"time"

	"github.com/radareorg/r2pipe-go"
)

func main() {
	http.HandleFunc("/", handler)

	port := os.Getenv("BACKEND_PORT")
	if port == "" {
		port = "8080"
	}

	log.Println("Starting server on port", port)

	http.ListenAndServe(":"+port, nil)
}

func handler(w http.ResponseWriter, r *http.Request) {
	if r.Method == "POST" {
		command1 := r.FormValue("command1")
		argument1 := r.FormValue("argument1")
		command2 := r.FormValue("command2")
		argument2 := r.FormValue("argument2")

		if !isValidCommand(command1) || !isValidCommand(command2) {
			http.Error(w, "Invalid command", http.StatusBadRequest)
			return
		}
		if !isValidArgument(argument1) || !isValidArgument(argument2) {
			http.Error(w, "Invalid argument", http.StatusBadRequest)
			return
		}

		r2Commands := []string{
			"oo+",
			"e cfg.sandbox=all", // idea from pancake
			"aaaa",
			fmt.Sprintf("%s %s", command1, argument1),
			fmt.Sprintf("%s %s", command2, argument2),
		}

		randomName := fmt.Sprintf("/tmp/adams_%d", rand.Intn(10000))
		err := copyFile("adams", randomName)
		if err != nil {
			http.Error(w, "Error copying adams binary", http.StatusInternalServerError)
			return
		}
		defer os.Remove(randomName)

		r2Output, err := executeR2Commands(randomName, r2Commands)
		if err != nil {
			if strings.Contains(err.Error(), "timeout") {
				http.Error(w, "Radare2 commands execution timed out", http.StatusRequestTimeout)
				return
			}
			http.Error(w, fmt.Sprintf("Error executing radare2 commands: %s", err), http.StatusInternalServerError)
			return
		}

		r2Output = strings.TrimSpace(r2Output)

		ctx, cancel := context.WithTimeout(context.Background(), 2*time.Second)
		defer cancel()

		cmd := exec.Command(randomName)
		cmd.Stderr = os.Stderr
		output, err := cmd.Output()
		if err != nil {
			if ctx.Err() == context.DeadlineExceeded {
				cmd.Process.Kill()
				http.Error(w, "Command execution timed out", http.StatusRequestTimeout)
				return
			}
			http.Error(w, fmt.Sprintf("Error executing final binary: %s", err), http.StatusInternalServerError)
			return
		}

		response := "Radare2 Output:\n" + r2Output + "\n\nFinal Binary Output:\n" + string(output)

		w.Header().Set("Content-Type", "text/plain")
		w.Write([]byte(response))
	} else {
		html := `
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Radare2 Command Runner</title>
	<style>
		body {
			font-family: 'Courier New', Courier, monospace;
			background-color: #1e1e1e;
			color: #ffffff;
			margin: 0;
			padding: 0;
			display: flex;
			justify-content: center;
			align-items: center;
			height: 100vh;
		}
		.container {
			max-width: 500px;
			width: 100%;
			padding: 20px;
			background-color: #1e1e1e;
			border: 2px solid #ffffff;
			border-radius: 8px;
			box-shadow: 0 0 10px rgba(255, 255, 255, 0.1);
		}
		h1 {
			text-align: center;
			margin-bottom: 20px;
		}
		a {
			display: block;
			text-align: center;
			margin-bottom: 20px;
			color: #007bff;
		}
		form {
			display: flex;
			flex-direction: column;
		}
		label {
			margin-bottom: 8px;
			color: #ffffff;
		}
		input[type="text"], input[type="submit"] {
			padding: 10px;
			margin-bottom: 15px;
			border: 1px solid #ffffff;
			border-radius: 5px;
			font-family: 'Courier New', Courier, monospace;
			font-size: 16px;
			background-color: #1e1e1e;
			color: #ffffff;
		}
		input[type="submit"] {
			background-color: #007bff;
			color: #ffffff;
			cursor: pointer;
			transition: background-color 0.3s ease;
		}
		input[type="submit"]:hover {
			background-color: #0056b3;
		}
		i {
			margin-top: 20px;
			display: block;
			text-align: center;
			color: #666;
		}
		.running-gif {
			width: 50%;
			height: auto;
			display: block;
			margin: 20px auto;
			border-radius: 8px;
			box-shadow: 0 0 10px rgba(255, 255, 255, 0.1);
		}
	</style>
</head>
<body>
	<div class="container">
		<h1>Radare2 Command Runner</h1>
		<img class="running-gif" src="https://media1.tenor.com/m/uUqrE-zkEe0AAAAC/omw-running.gif" alt="Running GIF">
		<a href="https://rada.re/n/">Radare2</a>
		<form action="/" method="post">
			<label for="command1">Command 1 (max 4 characters, English alphabet letters only):</label>
			<input type="text" id="command1" name="command1" maxlength="4" pattern="[A-Za-z]{1,4}" title="Max 4 characters, English alphabet letters only" required>
			<label for="argument1">Argument 1:</label>
			<input type="text" id="argument1" name="argument1" maxlength="16" pattern="[A-Za-z0-9 ]*">
			<label for="command2">Command 2 (max 4 characters, English alphabet letters only):</label>
			<input type="text" id="command2" name="command2" maxlength="4" pattern="[A-Za-z]{1,4}" title="Max 4 characters, English alphabet letters only" required>
			<label for="argument2">Argument 2:</label>
			<input type="text" id="argument2" name="argument2" maxlength="16" pattern="[A-Za-z0-9 ]*">
			<input type="submit" value="Submit">
		</form>
		<i>Anything can be a web challenge after all</i>
	</div>
</body>
<!-- a little note from the author: the regexes shown above as well as the max lengths are the same way enforced in the backend -->
<!-- it's not about bypassing those -->
</html>
		`
		fmt.Fprint(w, html)
	}
}

func isValidCommand(command string) bool {
	if len(command) > 4 {
		return false
	}
	var blackList = []string{"cat", "ls", "lu", "ll", "lr", "le", "pwd", "cd"}
	for _, black := range blackList {
		if strings.ToLower(command) == black {
			return false
		}
	}
	match, _ := regexp.MatchString("^[a-zA-Z0-9]+$", command)
	return match
}

func isValidArgument(argument string) bool {
	if len(argument) > 16 {
		return false
	}
	match, _ := regexp.MatchString("^[a-zA-Z0-9 ]*$", argument)
	return match
}

func copyFile(src, dst string) error {
	sourceFile, err := os.Open(src)
	if err != nil {
		return err
	}
	defer sourceFile.Close()

	destFile, err := os.Create(dst)
	if err != nil {
		return err
	}
	defer destFile.Close()

	_, err = io.Copy(destFile, sourceFile)
	if err != nil {
		return err
	}

	err = destFile.Sync()
	if err != nil {
		return err
	}

	sourceInfo, err := os.Stat(src)
	if err != nil {
		return err
	}
	return os.Chmod(dst, sourceInfo.Mode())
}

func executeR2Commands(binaryPath string, commands []string) (string, error) {
	log.Default().Println("Executing radare2 commands:", commands, "on", binaryPath)
	_, cancel := context.WithTimeout(context.Background(), 2*time.Second)
	defer cancel()

	r2p, err := r2pipe.NewPipe(binaryPath)
	if err != nil {
		return "", err
	}
	defer r2p.Close()

	var output string
	for _, cmd := range commands {
		out, err := r2p.Cmd(cmd)
		if err != nil {
			return "", err
		}
		output += out + "\n"
	}

	return output, nil
}
