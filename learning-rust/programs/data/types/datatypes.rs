fn main() {
	// float
    let x = 2.0; // f64, default
	let y: f32 = 3.0; // f32 : needs to be explicitily defined
	
	// boolean
	let t = true;
	let f: bool = false;

	//tuple
	let tup : (u8,i8) = (2,3);
	println!("{:?}",tup);
	
	let v: Vec<i32> = (0..5).collect();
	println!("{:?}",v);
}