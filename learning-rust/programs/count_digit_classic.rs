use std::io;

fn count_the_number_of_digits(mut num : u64) -> u8 {

	if num == 0 {
		0 as u8
	}
	else if num == 1 {
		1 as u8
	}
	else {
		let mut i : u8 = 0;
		while num != 0 {
			num = num / (10 as u64);
			i += 1;
		}
		i
	}
}

fn main()
{
	let mut xstr = String::new();
	io::stdin().read_line(&mut xstr).expect("Error");
	let trimmed = xstr.trim();
	let number= match trimmed.parse::<u64>(){
		Ok(i) => i,
		Err(..) => 0,
	};
	println!("{}",count_the_number_of_digits(number));
}