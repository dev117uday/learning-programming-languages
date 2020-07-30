fn main(){

	let x: i8 = 5;
    let y: Option<i8> = Some(5);

    let sum = x + match y {
		Some(c) => c,
		None => 0,
	};

	println!("Sum is : {}",sum);
}