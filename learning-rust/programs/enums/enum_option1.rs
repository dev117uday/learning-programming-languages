fn main(){

	let x = String::from("Hello world");

	println!("character at 13th index is : {}", match x.chars().nth(13) {
		Some(c) => c.to_string(),
		None => "No character found".to_string()

	});

}