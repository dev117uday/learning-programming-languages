use std::io;

fn main(){

	let width = 4;
	let height = 4;
	
	let mut array = vec![vec![0; width]; height];

	for i in 0..4 {	
		let mut xstr = String::from("");
		io::stdin().read_line(&mut xstr).ok().expect("read error");
		array[i] = xstr.split_whitespace().map(|s| s.parse().expect("parse error")).collect();
	}

	println!("{:?}",array)

}