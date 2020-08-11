let notSure: any = "Hello";
console.log(typeof notSure);

let someValue: any = "this is a string";
let strLength: number = (<string>someValue).length;
console.log(strLength);


let numbers: (string | number)[] = [1, 2, 4, 5, 6];
numbers.push("1");
console.log((numbers))

let objx = {
	name: "Uday",
}

objx.name = "0";

