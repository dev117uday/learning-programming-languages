
var mytodo = [];

mytodo.push('task 1');
mytodo.push('task 2');
mytodo.push('task 3');
mytodo.push('task 4');

mytodo.forEach(function(todo,index){
    console.log(`Your task number ${index+1} is : ${todo}  `);
})
