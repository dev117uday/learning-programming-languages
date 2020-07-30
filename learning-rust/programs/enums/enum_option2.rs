fn main(){

	println!("name is valid : {}", match option_enum("Uday") {
		Some(c) => c,
		None => "Not Found"
		// you can add .to_string() also but it works without it to
	})

}

fn option_enum(name : &str) -> Option<&str> {
	match name {
		"Uday" => Some("Yes"),
		"Yadav" => Some("Yes"),
		_  => None
	}
}