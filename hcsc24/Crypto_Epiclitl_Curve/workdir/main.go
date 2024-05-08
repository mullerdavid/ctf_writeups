package main

import (
	"bufio"
	"fmt"
	"log"
	"math/big"
	"net"
	"os"
	"strings"
	"time"
)

func main() {
	port := os.Getenv("BACKEND_PORT")
	if port == "" {
		port = "1337"
	}

	l, err := net.Listen("tcp", ":"+port)
	if err != nil {
		log.Println("Error listening:", err.Error())
		os.Exit(1)
	}
	defer l.Close()
	log.Println("Server listening on port " + port)

	for {
		conn, err := l.Accept()
		if err != nil {
			log.Println("Error accepting connection:", err.Error())
			continue
		}
		go handleRequest(conn)
	}
}

func handleRequest(conn net.Conn) {
	defer conn.Close()
	conn.SetDeadline(time.Now().Add(30 * time.Second))

	log.Printf("Accepted connection from %s", conn.RemoteAddr())

	fmt.Fprintf(conn, "I got a simple challenge for you! You are in control of x, y, and z. They need to be positive integers with at most 200 digits. Supply some values that satisfy the following equation:\n\n"+
		"x/(y+z) + y/(x+z) + z/(x+y) = 10\n\\frac{x}{y+z} + \\frac{y}{x+z} + \\frac{z}{x+y} = 10 (the same, but in LaTeX format)\n\n")

	fmt.Fprintf(conn, "We would appreciate if you wouldn't DoS the public instance with a high number of connections or requests. The source is provided for you to run your own instance.\n\n")

	fmt.Fprintf(conn, "You have 30 seconds to send your answer. Good luck!\n\n")

	x, err := inputDecimal(conn, "Enter the value for x: ")
	if err != nil {
		fmt.Fprintf(conn, "Error reading x: %v\n", err)
		return
	}
	y, err := inputDecimal(conn, "Enter the value for y: ")
	if err != nil {
		fmt.Fprintf(conn, "Error reading y: %v\n", err)
		return
	}
	z, err := inputDecimal(conn, "Enter the value for z: ")
	if err != nil {
		fmt.Fprintf(conn, "Error reading z: %v\n", err)
		return
	}

	log.Printf("Received x=%s, y=%s, z=%s from %s", x, y, z, conn.RemoteAddr())

	xF := new(big.Float).SetInt(x)
	yF := new(big.Float).SetInt(y)
	zF := new(big.Float).SetInt(z)

	sum := new(big.Float).Add(
		new(big.Float).Quo(xF, new(big.Float).Add(yF, zF)),
		new(big.Float).Add(
			new(big.Float).Quo(yF, new(big.Float).Add(xF, zF)),
			new(big.Float).Quo(zF, new(big.Float).Add(xF, yF)),
		),
	)

	four := new(big.Float).SetFloat64(10)
	tolerance := new(big.Float).SetFloat64(1e-10) // that's 0.0000000001, so should be okay
	diff := new(big.Float).Sub(sum, four)
	absDiff := new(big.Float).Abs(diff)
	if absDiff.Cmp(tolerance) < 0 {
		fmt.Fprint(conn, flagText)
	} else {
		resultStr := sum.Text('f', 15)
		fmt.Fprintf(conn, "Nope, that was not the correct answer. The correct answer was 10, but you supplied ~%s\n", resultStr)
		log.Printf("Incorrect answer: %s", resultStr)
	}

}

func inputDecimal(conn net.Conn, prompt string) (*big.Int, error) {
	conn.Write([]byte(prompt))
	input, err := bufio.NewReader(conn).ReadString('\n')
	if err != nil {
		return nil, err
	}
	input = strings.TrimSpace(input)

	if len(input) > 200 {
		conn.Write([]byte("nope\n"))
		return nil, fmt.Errorf("value must have at most 200 digits")
	}

	if strings.Contains(input, ".") {
		conn.Write([]byte("nope\n"))
		return nil, fmt.Errorf("value must be a whole number")
	}

	value, success := new(big.Int).SetString(input, 10)
	if !success || value.Sign() <= 0 {
		conn.Write([]byte("nope\n"))
		return nil, fmt.Errorf("invalid input")
	}
	return value, nil
}
