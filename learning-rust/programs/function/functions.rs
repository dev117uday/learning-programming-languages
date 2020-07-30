fn main() {
    println!("Hello, world!");
    another_function();
}

// normal function
fn another_function() {
	println!("Hello World from Another function.");
	just_another_function(5, 6);
}

// function parameters
fn just_another_function(x: i32, y: i32) {
    println!("The value of x is: {}", x);
	println!("The value of y is: {}", y);
	my_function_style();

}

// inline function
fn my_function_style(){
	let x = 5;
    let y = {
        let x = 3;
        x + 1
    };
	println!("The value of y is: {}", y);
	println!("The value of x is: {}", x);
	let a = five();
	println!("A : {}",a);
	let b = add_one(1);
	println!("add_one function returns {}",b)

}

// simple return function
fn five() -> i32 {
    5
}
// another return function
fn add_one(x: i32) -> i32 {
	return x+1;
	// do not include semi colon here
}