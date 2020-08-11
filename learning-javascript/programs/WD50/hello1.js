document.addEventListener('DOMContentLoaded', function () {
    document.querySelector('#from_form').onsubmit = function () {
        const name = document.getElementById("form_name").value;
        alert("Hello, " + name);
    }
})