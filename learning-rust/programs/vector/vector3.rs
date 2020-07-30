fn main(){

	let mut v = vec![10, 20, 30, 40, 50];
	v.insert(3, 35);
	v.remove(2);
	println!("{:?}",v);

}