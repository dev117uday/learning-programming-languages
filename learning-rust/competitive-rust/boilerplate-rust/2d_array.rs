fn main(){

	let width = 4;
	let height = 4;
	
	let mut array = vec![vec![0; width]; height];

	array[2][2] = 5;

	println!("{:#?}", array);

}