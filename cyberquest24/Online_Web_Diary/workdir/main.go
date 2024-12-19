package main

import (
	"bytes"
	"context"
	"crypto/rand"
	"database/sql"
	"encoding/json"
	"errors"
	"io"
	"log"
	"net"
	"net/http"
	"os"
	"strings"
	"time"

	"github.com/dlclark/regexp2"

	"github.com/dgrijalva/jwt-go"
	"github.com/jung-kurt/gofpdf"
	_ "github.com/mattn/go-sqlite3"
	"github.com/yuin/goldmark"
	"github.com/yuin/goldmark/extension"
	"github.com/yuin/goldmark/parser"
	"golang.org/x/crypto/bcrypt"
)

var jwtKey []byte
var db *sql.DB

type Credentials struct {
	Username string `json:"username"`
	Password string `json:"password"`
}

type Claims struct {
	Username string `json:"username"`
	jwt.StandardClaims
}

type Note struct {
	Title   string `json:"title"`
	Content string `json:"content"`
}

func main() {
	var err error
	jwtKey, err = genRandomJWTKey(32)
	if err != nil {
		log.Fatal(err)
	}

	log.Println("JWT key:", jwtKey)

	db, err = sql.Open("sqlite3", "./notes.db")
	if err != nil {
		log.Fatal(err)
	}
	defer db.Close()

	_, err = db.Exec(`CREATE TABLE IF NOT EXISTS users (
                        id INTEGER PRIMARY KEY AUTOINCREMENT,
                        username TEXT UNIQUE,
                        password TEXT
                    );
					CREATE TABLE IF NOT EXISTS notes (
						id INTEGER PRIMARY KEY AUTOINCREMENT,
						username TEXT NOT NULL,
						title TEXT UNIQUE,
						content TEXT
					)`)
	if err != nil {
		log.Fatal(err)
	}

	randPass, err := genRandomJWTKey(32)
	if err != nil {
		log.Fatal(err)
	}

	hashedPassword, err := bcrypt.GenerateFromPassword(randPass, bcrypt.DefaultCost)
	if err != nil {
		log.Fatal(err)
	}

	var count int
	err = db.QueryRow("SELECT COUNT(*) FROM users WHERE username = 'admin'").Scan(&count)
	if err != nil {
		log.Fatal(err)
	}

	if count == 0 {
		_, err = db.Exec("INSERT INTO users (id, username, password) VALUES (0, 'admin', ?)", string(hashedPassword))
		if err != nil {
			log.Fatal(err)
		}
	}

	flag := readFlagFromDisk()
	var flagCount int
	err = db.QueryRow("SELECT COUNT(*) FROM notes WHERE content = ?", flag).Scan(&flagCount)
	if err != nil {
		log.Fatal(err)
	}

	if flagCount == 0 {
		_, err = db.Exec("INSERT INTO notes (id, username, title, content) VALUES (0, 'admin', 'My precious flag', ?)", flag)
		if err != nil {
			log.Fatal(err)
		}
	}

	fs := http.FileServer(http.Dir("static"))
	http.Handle("/", fs)
	http.HandleFunc("/login", logRequest(login))
	http.HandleFunc("/register", logRequest(register))
	http.HandleFunc("/notes/create", logRequest(authenticate(createNote)))
	http.HandleFunc("/notes/list", logRequest(authenticate(listNotes)))
	http.HandleFunc("/notes/render", logRequest(authenticate(renderNote)))

	port := os.Getenv("BACKEND_PORT")
	if port == "" {
		port = "8080"
	}

	log.Fatal(http.ListenAndServe(":"+port, nil))
}

func headersToString(headers http.Header) string {
	var headerString string
	for key, value := range headers {
		headerString += key + ": " + strings.Join(value, ", ") + "; "
	}
	return headerString
}

func logRequest(next http.HandlerFunc) http.HandlerFunc {
	return func(w http.ResponseWriter, r *http.Request) {
		var body []byte
		var err error

		ipAddress, _, err := net.SplitHostPort(r.RemoteAddr)
		if err != nil {
			log.Println("Error getting IP address:", err)
		}

		if r.Method == "POST" {
			body, err = io.ReadAll(io.LimitReader(r.Body, 1<<20))
			if err != nil {
				if err == io.ErrUnexpectedEOF {
					http.Error(w, "Request body too large", http.StatusRequestEntityTooLarge)
					return
				}
				log.Println("Error reading body:", err)
				http.Error(w, "Could not read body", http.StatusInternalServerError)
				return
			}

			// Replace the request body so that the next handler can read it again
			r.Body = io.NopCloser(bytes.NewBuffer(body))
		}

		file, err := os.OpenFile("/data/diary.log", os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0644)
		if err != nil {
			log.Println("Error opening log file:", err)
		}

		defer file.Close()

		logLine := "[" + ipAddress + "] " + r.Method + " " + r.URL.Path + " " + r.Proto + " \"" + headersToString(r.Header) + "\" body: " + string(body) + "\n"
		log.Print(logLine)
		_, err = file.WriteString(logLine)
		if err != nil {
			log.Println("Error writing to log file:", err)
		}

		next(w, r)
	}
}

func readFlagFromDisk() string {
	flag, err := os.ReadFile("flag.txt")
	if err != nil {
		log.Fatal(err)
	}
	return string(flag)
}

func genRandomJWTKey(keyLength int) ([]byte, error) {
	key := make([]byte, keyLength)
	_, err := rand.Read(key)
	if err != nil {
		return nil, err
	}
	return key, nil
}

func setCorsHeaders(w http.ResponseWriter, r *http.Request) {
	w.Header().Set("Access-Control-Allow-Origin", "*")
	w.Header().Set("Access-Control-Allow-Headers", "Authorization, Content-Type")
	w.Header().Set("Access-Control-Allow-Methods", "POST, GET, OPTIONS")
	if r.Method == "OPTIONS" {
		w.WriteHeader(http.StatusOK)
	}
}

func validateUser(creds Credentials) (int, error) {
	var userID int
	var username string
	var password string
	var err error

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	queryResult := make(chan error)

	go func() {
		usernameRegex := regexp2.MustCompile(`^\s*([a-zA-Z0-9]+)*\s*$`, 0)
		if m, _ := usernameRegex.FindStringMatch(creds.Username); m != nil {
			gps := m.Groups()
			username = gps[1].Captures[0].String()
		}

		err = db.QueryRow("SELECT id, password FROM users WHERE username = '"+username+"'").Scan(&userID, &password)
		if err != nil {
			queryResult <- err
		}

		err = bcrypt.CompareHashAndPassword([]byte(password), []byte(creds.Password))
		if err != nil {
			queryResult <- err
		}

		queryResult <- nil
	}()

	select {
	case err := <-queryResult:
		if err != nil {
			return -1, errors.New("no user found")
		}
	case <-ctx.Done():
		return userID, err
	}
	return userID, nil
}

func createToken(w http.ResponseWriter, userID int) error {
	var username string

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	queryResult := make(chan error)

	go func() {
		err := db.QueryRow("SELECT username FROM users WHERE id = ?", userID).Scan(&username)
		if err != nil {
			queryResult <- err
			return
		}

		expirationTime := time.Now().Add(1 * time.Hour)
		claims := &Claims{
			Username: username,
			StandardClaims: jwt.StandardClaims{
				ExpiresAt: expirationTime.Unix(),
			},
		}

		token := jwt.NewWithClaims(jwt.SigningMethodHS256, claims)
		tokenString, err := token.SignedString(jwtKey)
		if err != nil {
			queryResult <- err
		}

		w.Header().Set("Content-Type", "application/json")
		json.NewEncoder(w).Encode(map[string]string{"token": tokenString})

		queryResult <- nil
	}()

	select {
	case err := <-queryResult:
		if err != nil {
			w.WriteHeader(http.StatusInternalServerError)
			w.Write([]byte("Failed to create token"))
			return err
		}
	case <-ctx.Done():
		w.WriteHeader(http.StatusInternalServerError)
		w.Write([]byte("Failed to create token"))
		return nil
	}
	return nil
}

func authenticate(next http.HandlerFunc) http.HandlerFunc {
	return func(w http.ResponseWriter, r *http.Request) {
		setCorsHeaders(w, r)
		tokenString := r.Header.Get("Authorization")
		if tokenString == "" {
			w.WriteHeader(http.StatusUnauthorized)
			w.Write([]byte("Missing Authorization header"))
			return
		}

		token, err := jwt.ParseWithClaims(tokenString, &Claims{}, func(token *jwt.Token) (interface{}, error) {
			return jwtKey, nil
		})
		if err != nil {
			w.WriteHeader(http.StatusUnauthorized)
			w.Write([]byte("Invalid or expired token"))
			return
		}

		claims, ok := token.Claims.(*Claims)
		if !ok || !token.Valid {
			w.WriteHeader(http.StatusUnauthorized)
			w.Write([]byte("Invalid token claims"))
			return
		}

		ctx := context.WithValue(r.Context(), "username", claims.Username)
		next.ServeHTTP(w, r.WithContext(ctx))
	}
}

func login(w http.ResponseWriter, r *http.Request) {
	var creds Credentials
	setCorsHeaders(w, r)
	err := json.NewDecoder(r.Body).Decode(&creds)
	if err != nil {
		log.Println(err)
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte("Invalid request"))
		return
	}

	if creds.Username == "" || creds.Password == "" || len(creds.Username) > 32 || len(creds.Password) > 32 {
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte("Invalid request"))
		return
	}

	userID, err := validateUser(creds)
	if userID == -1 {
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte(err.Error()))
		return
	}
	err = createToken(w, userID)
	if err != nil {
		w.WriteHeader(http.StatusInternalServerError)
		return
	}
}

func register(w http.ResponseWriter, r *http.Request) {
	var creds Credentials
	setCorsHeaders(w, r)
	err := json.NewDecoder(r.Body).Decode(&creds)
	if err != nil {
		log.Println(err)
		w.WriteHeader(http.StatusBadRequest)
		return
	}

	if creds.Username == "" || creds.Password == "" || len(creds.Username) > 32 || len(creds.Password) > 32 {
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte("Invalid request"))
		return
	}

	userID, err := validateUser(creds)
	if userID != -1 {
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte("User already exists"))
		w.Write([]byte(err.Error()))
		return
	}

	hashedPassword, err := bcrypt.GenerateFromPassword([]byte(creds.Password), bcrypt.DefaultCost)
	if err != nil {
		w.WriteHeader(http.StatusInternalServerError)
		return
	}

	if err != nil {
		log.Println(err)
		w.WriteHeader(http.StatusInternalServerError)
		return
	}

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	queryResult := make(chan error)

	go func() {
		_, err := db.Exec("INSERT INTO users (username, password) VALUES (?, ?)", creds.Username, string(hashedPassword))
		queryResult <- err
	}()

	select {
	case err := <-queryResult:
		if err != nil {
			w.WriteHeader(http.StatusInternalServerError)
			return
		}
		w.WriteHeader(http.StatusCreated)
	case <-ctx.Done():
		w.WriteHeader(http.StatusInternalServerError)
	}

}

func createNote(w http.ResponseWriter, r *http.Request) {
	username := r.Context().Value("username").(string)
	if username == "" {
		w.WriteHeader(http.StatusUnauthorized)
		w.Write([]byte("Unauthorized"))
		return
	} else if username == "admin" {
		w.WriteHeader(http.StatusForbidden)
		w.Write([]byte("Admin cannot create notes"))
		return
	}

	var note Note
	err := json.NewDecoder(r.Body).Decode(&note)
	if err != nil {
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte("Invalid request"))
		return
	}

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	queryResult := make(chan error)

	go func() {
		_, err := db.Exec("INSERT INTO notes (username, title, content) VALUES (?, ?, ?)", username, note.Title, note.Content)
		queryResult <- err
	}()

	select {
	case err := <-queryResult:
		if err != nil {
			w.WriteHeader(http.StatusInternalServerError)
			w.Write([]byte("Failed to create note"))
			return
		}
		w.WriteHeader(http.StatusCreated)
	case <-ctx.Done():
		w.WriteHeader(http.StatusInternalServerError)
		w.Write([]byte("Timed out while creating note"))
	}
}

func listNotes(w http.ResponseWriter, r *http.Request) {
	username := r.Context().Value("username").(string)
	if username == "" {
		w.WriteHeader(http.StatusUnauthorized)
		w.Write([]byte("Unauthorized"))
		return
	}

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	queryResult := make(chan struct {
		rows *sql.Rows
		err  error
	})

	go func() {
		rows, err := db.Query("SELECT id, title FROM notes WHERE username = '" + username + "'")
		queryResult <- struct {
			rows *sql.Rows
			err  error
		}{rows, err}
	}()

	var rows *sql.Rows
	select {
	case result := <-queryResult:
		rows = result.rows
		err := result.err
		if err != nil {
			w.WriteHeader(http.StatusInternalServerError)
			w.Write([]byte("Failed to list notes"))
			return
		}
	case <-ctx.Done():
		w.WriteHeader(http.StatusInternalServerError)
		w.Write([]byte("Timed out while listing notes"))
		return
	}

	defer rows.Close()

	notes := make(map[int]string)
	for rows.Next() {
		var id int
		var title string
		err := rows.Scan(&id, &title)
		if err != nil {
			w.WriteHeader(http.StatusInternalServerError)
			w.Write([]byte("Failed to list notes"))
			return
		}
		notes[id] = title
	}

	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(notes)
}

func markdownToHTML(content string) string {
	md := goldmark.New(
		goldmark.WithExtensions(extension.GFM),
		goldmark.WithParserOptions(parser.WithAutoHeadingID()),
	)
	var buf bytes.Buffer
	if err := md.Convert([]byte(content), &buf); err != nil {
		log.Println("Failed to convert Markdown to HTML:", err)
		return ""
	}
	return buf.String()
}

func renderPDF(title, content string) ([]byte, error) {
	pdf := gofpdf.New("P", "mm", "A4", "")
	pdf.AddPage()
	pdf.SetTitle(title, false)
	pdf.SetAuthor("CyberQuest24 Diary", false)
	pdf.SetSubject(title, false)
	pdf.SetCreator("CyberQuest24", false)
	pdf.SetKeywords("CTF, CyberQuest24, Diary", false)
	pdf.SetFont("Arial", "B", 16)
	pdf.Cell(0, 10, title)
	pdf.Ln(10)
	pdf.SetFont("Arial", "", 12)
	htmlContent := markdownToHTML(content)
	html := pdf.HTMLBasicNew()
	_, lineHt := pdf.GetFontSize()
	html.Write(lineHt, htmlContent)
	var buf bytes.Buffer
	err := pdf.Output(&buf)
	if err != nil {
		return nil, err
	}
	return buf.Bytes(), nil
}

func renderNote(w http.ResponseWriter, r *http.Request) {
	username := r.Context().Value("username").(string)
	if username == "" {
		w.WriteHeader(http.StatusUnauthorized)
		w.Write([]byte("Unauthorized"))
		return
	}
	noteID := r.URL.Query().Get("noteID")
	if noteID == "" {
		w.WriteHeader(http.StatusBadRequest)
		w.Write([]byte("Missing noteID"))
		return
	}

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	queryResult := make(chan struct {
		title     string
		content   string
		pdfBytes  []byte
		queryErr  error
		renderErr error
	})

	go func() {
		var title string
		var content string
		err := db.QueryRow("SELECT title, content FROM notes WHERE id = "+noteID+" AND username = '"+username+"'").Scan(&title, &content)
		if err != nil {
			queryResult <- struct {
				title     string
				content   string
				pdfBytes  []byte
				queryErr  error
				renderErr error
			}{"", "", nil, err, nil}
			return
		}

		pdfBytes, err := renderPDF(title, content)
		queryResult <- struct {
			title     string
			content   string
			pdfBytes  []byte
			queryErr  error
			renderErr error
		}{title, content, pdfBytes, nil, err}
	}()

	select {
	case result := <-queryResult:
		if result.queryErr != nil {
			w.WriteHeader(http.StatusInternalServerError)
			w.Write([]byte("Failed to render note"))
			return
		}
		if result.renderErr != nil {
			w.WriteHeader(http.StatusInternalServerError)
			w.Write([]byte("Failed to render note"))
			return
		}

		w.Header().Set("Content-Type", "application/pdf")
		w.Header().Set("Content-Disposition", "attachment; filename="+result.title+".pdf")
		w.Write(result.pdfBytes)
	case <-ctx.Done():
		w.WriteHeader(http.StatusInternalServerError)
		w.Write([]byte("Timed out while rendering note"))
	}
}
