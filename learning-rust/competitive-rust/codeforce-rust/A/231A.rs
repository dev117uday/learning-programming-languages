use std::io;

fn main() {

	let mut xstr = String::new();
	io::stdin().read_line(&mut xstr).expect("Error");
	let trimmed = xstr.trim();
	let height = match trimmed.parse::<usize>(){
		Ok(i) => i,
		Err(..) => 0,
	};

	let width = 3;

	let mut array = vec![vec![0; width]; height];

	for i in 0..height {	
		let mut xstr = String::from("");
		io::stdin().read_line(&mut xstr).ok().expect("read error");
		array[i] = xstr.split_whitespace().map(|s| s.parse().expect("parse error")).collect();
	}

	println!("{}",problems_to_solve(array,height));

}

fn problems_to_solve(array : Vec<Vec<usize>>, height : usize) -> u16 {
	let mut count : u16 = 0;
	for i in 0..height {
		let mut sum = 0;
		for j in 0..3 {
			sum = sum + array[i][j];
		}
		if sum >= 2 {
			count = count+1;
		}
	}
	count

}