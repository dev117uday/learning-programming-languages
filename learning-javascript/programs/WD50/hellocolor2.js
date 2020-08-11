document.addEventListener('DOMContentLoaded', function () {
    document.querySelectorAll('.color-change').forEach(function (button) {
        button.onclick = function () {
            document.getElementById('heading').style.color = button.dataset.color;
        }
    })
})