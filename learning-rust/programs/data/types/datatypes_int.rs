fn main(){
	let a : i8 = 8;	
	let b : i16 = 16;
	let c : i32 = 32;
	// datatype by default is i32
	let d : i64 = 64;
	let e : i128 = 128;
	let f : i32 = (2*b).into();
	let g : usize = 9;
	let h : i32 = 2147483647;
	// isize or usize take the value that architecture can handle

	// for example : if system is 32 bit, usize will be u32
	//			   : if system is 64 bit, usize will be u64	

	// error if let f : i32 = 2*b;
	/* 
		error let g : i32 = 2*d;
		you can convert an `i64` to `i32` and panic if the converted value wouldn't fit
	*/
	println!("Value of a : {}",a);
	println!("Value of b : {}",b);
	println!("Value of c : {}",c);
	println!("Value of d : {}",d);
	println!("Value of e : {}",e);
	println!("Value of f : {}",f);
	println!("Value of f : {}",g);
	println!("Value of f : {}",h.wrapping_add(1) + 22);
	println!("Value of g : {}",g);
}

// to make it unsigned, replace `i` with `u`
// ex : `i32` becomes `u32`
