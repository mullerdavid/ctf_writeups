document.getElementById("login-form").addEventListener("submit", function(event) {
    event.preventDefault();

    const usern = document.getElementById("login_username").value;
    const passwd = document.getElementById("login_password").value;

    const loginData = {
        username: usern,
        password: passwd
    };

    fetch("login.php", {
        method: "POST",
        headers: {
            "Content-Type": "application/json"
        },
        body: JSON.stringify(loginData)
    })
    .then(response => response.json())
    .then(data => {
        if (data.status === "success") {
            alert("Login successful");
        } else {
            alert("Error: " + data.message);
        }
    })
    .catch(error => {
        console.error("Error:", error);
        alert("An error occurred during login");
    });
});
