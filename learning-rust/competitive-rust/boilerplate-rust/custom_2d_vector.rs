use std::io;

fn main() {

	let mut xheight = String::new();
	io::stdin().read_line(&mut xheight).expect("Error");
	let trimmed = xstr.trim();
	let height = match trimmed.parse::<usize>(){
		Ok(i) => i,
		Err(..) => 0,
	};

	let mut xweight = String::new();
	io::stdin().read_line(&mut xweight).expect("Error");
	let trimmed = xstr.trim();
	let weight = match trimmed.parse::<usize>(){
		Ok(i) => i,
		Err(..) => 0,
	};

	let mut array = vec![vec![0; width]; height];

	for i in 0..height {	
		let mut xstr = String::from("");
		io::stdin().read_line(&mut xstr).ok().expect("read error");
		array[i] = xstr.split_whitespace().map(|s| s.parse().expect("parse error")).collect();
	}

	println!("{:?}", array);

}
