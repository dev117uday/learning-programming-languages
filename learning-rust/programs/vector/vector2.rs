fn main(){

	let mut vecx : Vec<u32>= Vec::new();

	for i in 1..10 {
		vecx.push(i);
	}

	for i in &vecx {
		if i%7==0 {
			println!("{} % 7 == 0",i);
		}
	}

	println!("{} || {}",vecx.len(),vecx.capacity())
} 