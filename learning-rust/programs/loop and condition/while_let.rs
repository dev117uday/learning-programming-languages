fn main(){

	let mut s = Some(0);

	while let Some(i) = s {
		if i > 19 {
			println!("Quit");
			s = None;
		} else {
			println!("{}",i);
			s = Some(i+2);
		}
	}

	let mut v = vec![1,2,3,4,5,6];
	
	while let Some(x) = v.pop() {
		println!("{}",x);
	}

}