fn main(){
	// const keywork requires u to define datatype, alos styling convention
	const LOWER_LIMIT :i8 = 0;
	println!("lower limit is : {}",LOWER_LIMIT);
	if true { 
		const ANOTHER_LIMIT :i8 = 2;
		println!("another limit : {}",ANOTHER_LIMIT);
	}
	// println!("another limit : {}",ANOTHER_LIMIT);
	// this wont work, value dropped.
}