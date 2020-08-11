document.addEventListener('DOMContentLoaded', function () {

    document.querySelector("#red").onclick = function () {
        document.getElementById("heading").style.color = 'red'
    }

    document.querySelector("#blue").onclick = function () {
        document.getElementById("heading").style.color = 'blue'
    }

    document.querySelector("#green").onclick = function () {
        document.getElementById("heading").style.color = 'green'
    }
});