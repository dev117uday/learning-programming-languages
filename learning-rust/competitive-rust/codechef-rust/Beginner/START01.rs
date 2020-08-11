use std::io;

fn main() {
	
	let mut xstr = String::new();
	io::stdin().read_line(&mut xstr).expect("Error");
	println!("{}",xstr);

}