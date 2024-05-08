"use strict";

function loginHandler() {
  let username = document.getElementById("username").value;
  let password = document.getElementById("password").value;

  let request_body = {
    name: username,
    password: password,
  };

  fetch("/login", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
    },
    body: JSON.stringify({
      name: username,
      password: password,
    }),
  })
    .then((response) => {
      return response.json();
    })
    .then((result) => {
      console.log(result);
    })
    .catch((error) => {
      console.error("There was a problem with the fetch operation:", error);
    });
}

document.getElementById("login-btn").addEventListener("click", loginHandler);
