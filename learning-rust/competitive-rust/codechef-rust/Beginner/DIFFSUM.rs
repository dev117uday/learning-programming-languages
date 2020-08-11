use std::io;

fn main() {
	
	let mut xstr = String::new();	

	io::stdin().read_line(&mut xstr).expect("Error");
	let xtrimmed = xstr.trim();
	let xnum : i16 = match xtrimmed.parse::<i16>(){
		Ok(i) => i,
		Err(..) => 0,
	};

    let mut ystr = String::new();
	io::stdin().read_line(&mut ystr).expect("Error");
	let ytrimmed = ystr.trim();
	let ynum : i16 = match ytrimmed.parse::<i16>(){
		Ok(i) => i,
		Err(..) => 0,
	};
	println!("{}",xnum+ynum);


}