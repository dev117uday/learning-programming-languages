fn main(){

	//creating a vector
	let mut v : Vec<u32> = Vec::new();
	let mut x = vec![1, 2, 3];

	// push to vector
	v.push(5);
    v.push(6);
    v.push(7);
	v.push(8);
	
	let third: u32 = v[2];
	println!("The third element is {}", third);
	println!("vector is {:?}",v);
	println!("3rd element is : {}", match v.get(1) {
		Some(&i) => i,
		None => 0
	});
    for i in &mut x {
		*i += 50;
	}
	println!("{:?}",x);
}