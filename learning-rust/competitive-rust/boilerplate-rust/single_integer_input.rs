use std::io;

fn main() {
	
	let mut xstr = String::new();
	io::stdin().read_line(&mut xstr).expect("Error");
	let trimmed = xstr.trim();
	match trimmed.parse::<u32>(){
		Ok(i) => println!("Number : {}", i ),
		Err(..) => println!("Error"),
	}

}