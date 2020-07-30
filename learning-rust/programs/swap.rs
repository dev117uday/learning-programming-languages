fn main(){
	let mut a : u8 = 5;
	let mut b : u8 = 3;
	println!("a : {} | b : {}",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	println!("a : {} | b : {}",a,b);
}