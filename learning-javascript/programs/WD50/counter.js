document.addEventListener('DOMContentLoaded', function() {
    document.querySelector('button').onclick = counting;
});

let counter =0;
function counting() {
    counter = counter +  1;
    document.querySelector('#count').innerHTML = counter;
    console.log("Count registered !")
    if(counter%5===0){
        alert("Count reached :" + counter );
        console.log("Alert at : " + counter);
    }
}