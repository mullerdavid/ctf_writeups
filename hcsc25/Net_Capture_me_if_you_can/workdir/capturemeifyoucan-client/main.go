package main

import (
	"crypto/sm4"
	"crypto/tls"
	"encoding/base64"
	"fmt"
	"io"
	"log"
	"os"
)

func decryptData(encryptedData string) ([]byte, error) {
	key := []byte("radiofrequencies")

	// Step 1: Decode base64 string to get raw ciphertext
	decoded, err := base64.StdEncoding.DecodeString(encryptedData)
	if err != nil {
		return nil, fmt.Errorf("base64 decode failed: %v", err)
	}

	// Step 2: Decrypt using SM4-CBC with the same key
	decrypted, err := sm4.Sm4Cbc(key, decoded, false) // false = decrypt mode
	if err != nil {
		return nil, fmt.Errorf("decryption failed: %v", err)
	}

	return decrypted, nil
}

func main() {
	stderr := log.New(os.Stderr, "", 0)

	// Configure TLS
	config := &tls.Config{
		InsecureSkipVerify: true,
		MinVersion:         tls.VersionTLS13,
		MaxVersion:         tls.VersionTLS13,
		CipherSuites: []uint16{
			tls.TLS_AES_128_GCM_SHA256,
			tls.TLS_AES_256_GCM_SHA384,
		},
	}

	conn, err := tls.Dial("tcp", "10.10.1.10:1337", config)
	state := conn.ConnectionState()
	stderr.Print(state.PeerCertificates[0].DNSNames[0])
	if err != nil {
		log.Fatal(err)
	}
	defer conn.Close()

	data, err := io.ReadAll(conn)
	if err != nil && err != io.EOF {
		log.Fatal(err)
	}
	data, err = decryptData(string(data))
	if err != nil {
		log.Fatal(err)
	}
	fmt.Print(string(data))

}
