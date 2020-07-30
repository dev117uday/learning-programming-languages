fn main() {

	//tuples
	let tup: (i32, f64, u8) = (500, 6.4, 1);
	let (x, y, z) = tup;
	println!("x: {} \ny: {} \nz: {}", x,y,z);
	
	// accessing tuple values
	let one = tup.0;
    let two = tup.1;
	let three = tup.2;
	println!("one: {} \ntwo: {} \nthree: {}", one,two,three);

	/*
		array
		let a = [1, 2, 3, 4, 5];
		let months = ["January", "February", "March", "April", "May", "June", "July",
		"August", "September", "October", "November", "December"];
	*/

	let a: [i32; 5] = [1, 2, 3, 4, 5];	
	println!("0: {}",a[0]);
	

}