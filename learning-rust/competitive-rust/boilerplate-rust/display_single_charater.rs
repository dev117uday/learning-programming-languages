fn main(){

	let xstr = "Hello World";
	println!("{}",match xstr.chars().nth(12){
		Some(c) => c.to_string(),
		None => "Not found".to_string(),
	});


}