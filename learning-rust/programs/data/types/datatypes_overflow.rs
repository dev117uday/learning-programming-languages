fn main(){

	let big_val = std::i32::MAX;
	let x = big_val.wrapping_add(1);
	// wrapping add will prevent overflow and will make the value MIN i.e. -2147483648
	println!("{}",x);

}