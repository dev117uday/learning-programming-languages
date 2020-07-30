use std::mem;

fn main(){
	// to show how many bits of memory does the variable takes up
	std_mem();
}

fn std_mem(){
	let x = (2,3,4,(3,4));
	println!("{}",mem::size_of_val(&x));
	let y = ();
	// this is a unit value
	println!("{}",mem::size_of_val(&y));
}