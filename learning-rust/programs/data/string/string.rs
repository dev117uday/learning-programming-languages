fn main(){

	let s1 = String::from("Hello, ");
    let s2 = String::from("world!");
	let s3 = s1 + &s2; 
	println!("{}",s3);
	println!("{}",s2);

	for c in "नमस्ते".chars() {
		print!("{}", c);
	}

}