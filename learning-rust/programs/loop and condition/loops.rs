fn main(){ 


	let x = loop {
		print!("#");
		break 3
	};
	println!("{}",x);

	for i in 1..=10 {
		print!("|{}|",i);
	}


}