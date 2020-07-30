fn main(){
	let mut hello = String::from("Hello");
	add_world(&mut hello);
	println!(" hello : {}",hello);	
}
fn add_world(x : &mut String) {
	x.push_str(" World");
}
