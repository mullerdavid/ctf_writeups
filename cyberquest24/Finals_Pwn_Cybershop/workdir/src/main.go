package main

import (
	"bytes"
	"compress/gzip"
	"compress/zlib"
	"io"
	"log"
	"net/http"
	"net/http/cgi"
)

func decodeHandler(next http.Handler) http.Handler {
	return http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		var reader io.ReadCloser
		var err error

		log.Printf("Content-Encoding: %s\n", r.Header.Get("Content-Encoding"))

		switch r.Header.Get("Content-Encoding") {
		case "gzip":
			reader, err = gzip.NewReader(r.Body)
			if err != nil {
				http.Error(w, "Failed to create gzip reader", http.StatusBadRequest)
				return
			}
		case "deflate":
			reader, err = zlib.NewReader(r.Body)
			if err != nil {
				http.Error(w, "Failed to create zlib reader", http.StatusBadRequest)
				return
			}
		default:
			if r.ContentLength > 36+32 {
				http.Error(w, "Name too long! Max 32 characters!", http.StatusBadRequest)
				return
			}
			reader = r.Body
		}
		defer reader.Close()

		body, err := io.ReadAll(io.LimitReader(reader, 512*1024))
		if err != nil || len(body) >= 512*1024 {
			http.Error(w, "Bitte keine Dekompressionsbomben", http.StatusExpectationFailed)
			return
		}

		log.Printf("Decompressed request body: %s\n", body)

		r.Body = io.NopCloser(bytes.NewReader(body))
		r.ContentLength = int64(len(body))

		next.ServeHTTP(w, r)
	})
}

type responseWriter struct {
	http.ResponseWriter
	io.Writer
	buf *bytes.Buffer
}

func (rw *responseWriter) Write(data []byte) (int, error) {
	return rw.Writer.Write(data)
}

func (rw *responseWriter) Header() http.Header {
	return rw.ResponseWriter.Header()
}

func (rw *responseWriter) WriteHeader(statusCode int) {
	rw.ResponseWriter.WriteHeader(statusCode)
}

func main() {
	cgiHandler := &cgi.Handler{
		Path: "./index.cgi",
		Dir:  "/",
	}

	http.Handle("/", decodeHandler(cgiHandler))

	port := ":8080"
	log.Printf("Starting server on %s\n", port)
	if err := http.ListenAndServe(port, nil); err != nil {
		log.Fatalf("Server failed: %v\n", err)
	}
}
