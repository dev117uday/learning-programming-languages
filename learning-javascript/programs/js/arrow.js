const sayhello = (name) => `hello there ${name} `;

console.log(sayhello('uday'));

const todos = [{
    title: 'task 1',
    isdone: false,
},{
    title: 'task 2',
    isdone: true,
},{
    title: 'task 3',
    isdone: false,
}];

const thingsdone = todos.filter((todos) => {
    return todos.isdone == true;
})

console.log(thingsdone);

