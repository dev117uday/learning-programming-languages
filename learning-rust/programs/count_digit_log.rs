use std::io;

fn count_the_number_of_digits(num : f64) -> u8 {
	if num == 0.0 {
		let result : u8 = 0;
		result
	}
	else if num == 1.0 {
		let result : u8 = 1;
		result
	}
	else {
		let result = (num.log10() + 1 as f64) as u8;
		result
	}
}

fn main(){

	let mut xstr = String::new();
	io::stdin().read_line(&mut xstr).expect("Error");
	let trimmed = xstr.trim();
	let number= match trimmed.parse::<f64>(){
		Ok(i) => i,
		Err(..) => 0.0,
	};
	println!("{}",count_the_number_of_digits(number));
}