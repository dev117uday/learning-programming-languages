fn main(){
	let x = 45;
	println!("Value of x is : {}",x);
	/*
		x = 10; gives an error
		becoz variable are immutaable by default
	*/
	let mut y = 100;
	println!("Value of y is {}",y);
	y = 10;
	// becoz y is mutable
	println!("Value of y is {}",y);
}