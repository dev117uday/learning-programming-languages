fn main() {
    let s1 = String::from("hello");
    let len = calculate_length(&s1);
	println!("The length of '{}' is {}.", s1, len);
	
	let mut s = String::from("hello");
	let p = change(&mut s);
	println!("s : {}",s);
	println!("p : {}",p);

	let reference_to_nothing = no_dangle();
	println!("reference to nothing : {}",reference_to_nothing);
}

fn calculate_length(s: &String) -> usize {
    s.len()
}

fn change(some_string: &mut String) -> String {
	some_string.push_str(", world");
	some_string.to_string()
}

fn no_dangle() -> String {
    let s = String::from("hello");
    s
}