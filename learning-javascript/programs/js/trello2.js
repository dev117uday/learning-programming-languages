let mytodo = {
    day: 'Monday',
    meetings: 0,
    meetdone: 0,

}

let addmeeting = function(todo,meet=0){
    todo.meetings = todo.meetings+meet;

}
let meetdone = function(todo,meet=0){
    todo.meetdone=todo.meetdone-meet;
}

let resetday = function(todo){
    todo.meetdone=0;
    todo.meetings=0;
}

let getdaysummary=function(todo){

    let meetleft=todo.meetings+todo.meetdone;
    return `You have ${meetleft} meetings left today`;
}

addmeeting(mytodo,4);

addmeeting(mytodo,3);

meetdone(mytodo,5);

console.log(getdaysummary(mytodo));