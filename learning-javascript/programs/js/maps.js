var uday =
{
    name: 'uday',
    stream: 'cs',
}
var kunal =
{
    name: 'kunal',
    stream: 'cs',
}

var param =
{
    name: 'param',
    stream: 'mechanical',
}

let user = new Map()

console.log(typeof user)

user.set('uday', uday)
user.set('kunal', kunal)
user.set('param', param)

// console.log(user)
// console.log(user.size)

console.log(user.keys())

for (const key of user.keys()) {
    console.log(key);
}

console.log(user.values())

for (const value of user.values()) {
    console.log(value.stream)
}

for (const [key, value] of user.entries()) {
    console.log(key + ' = ' + value.name);
}

user.forEach((value, key) => console.log(key + " = " + value.name))