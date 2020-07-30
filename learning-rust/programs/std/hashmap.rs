use std::collections::HashMap;

fn main(){
	let mut hm = HashMap::new();

	hm.insert(String::from("first"), String::from("uday yadav"));
	hm.insert(String::from("second"), String::from("harshit yadav"));

	for (first,last) in &hm {
		println!("{} :: {}",first,last);
	}

	match hm.get(&String::from("first")) {
		Some(n) => println!("{:?}",n),
		_ => print!("Not match\n")
	}
}