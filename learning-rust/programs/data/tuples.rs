use std::mem;

fn main(){

	let x = (2,3,4,(3,4));
	println!("{} ## {:?}",x.2,x.3);
	println!("{}",mem::size_of_val(&x));

}