use std::io;

fn main() {

	let mut xstr =  String::new();
	io::stdin().read_line(&mut xstr).expect("error");
	let trimmed = xstr.trim();
	match trimmed.parse::<u32>(){
		Ok(i) => if i==2 {
			println!("NO");
		} else if i%2==0 {
			println!("YES");
		} else {
			println!("NO");
		}
		Err(..) => println!("Err"),
	}

}