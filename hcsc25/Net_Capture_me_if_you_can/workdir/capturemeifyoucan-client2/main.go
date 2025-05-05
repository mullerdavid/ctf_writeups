package main

import (
	"crypto/tls"
	"encoding/pem"
	"fmt"
	"io"
	"log"
	"net/http"
	"os"
)

func main() {
	data, err := io.ReadAll(os.Stdin)

	block, rest := pem.Decode([]byte(data))
	privPEM := pem.EncodeToMemory(block)
	block, _ = pem.Decode(rest)
	certPEM := pem.EncodeToMemory(block)
	clientCert, err := tls.X509KeyPair(certPEM, privPEM)
	if err != nil {
		log.Fatal(err)
	}

	config := &tls.Config{
		InsecureSkipVerify: true,
		Certificates:       []tls.Certificate{clientCert},
		MinVersion:         tls.VersionTLS13,
		CurvePreferences:   []tls.CurveID{tls.X25519MLKEM768},
	}

	client := &http.Client{
		Transport: &http.Transport{
			TLSClientConfig: config,
		},
	}

	// 4. Use client for requests
	resp, _ := client.Get("https://10.10.1.10:8443/api/v1/flag")
	if err != nil {
		log.Fatal(err)
	}
	bodyBytes, err := io.ReadAll(resp.Body)
	if err != nil {
		log.Fatal(err)
	}
	bodyString := string(bodyBytes)
	fmt.Print(bodyString)
}
