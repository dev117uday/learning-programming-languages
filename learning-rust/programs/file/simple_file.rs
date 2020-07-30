use std::fs::File;

fn main(){

	let f = File::open("test.txt");

	let _f = match f {
		Ok(file) => file,
		Err(error) => {
			panic!("Error : {}",error)
		}
	};
}