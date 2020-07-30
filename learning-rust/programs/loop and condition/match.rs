fn main(){
	let x ;
	x = 3;
	match x {
		n @ 2..=4 => print!("{}",n),
		5 => print!("2"),
		6 => print!("3"),
		_ => print!("nothing"),
	}
}