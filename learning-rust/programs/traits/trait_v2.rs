use std::fmt;

struct Object {
	width : u32,
	height : u32,
}

impl Object {
	fn area(&self) -> u32 {
		self.width*self.height
	}
	fn constructor (width : u32,height:u32) -> Object {
		Object {
			width,
			height
		}
	}
	fn display (&self) {
		println!("{}x{} is : {}",self.width,self.height,self.area());
	}
}

impl fmt::Display for Object {
	fn fmt(&self , f : &fmt::Formatter ) -> fmt::Result {
		write!(f,"width is {} || height is {}",self.width,self.height)
	}
}

fn main(){
	let first_rectangle = Object::constructor(40, 50);
	first_rectangle.display();
	println!("{}",first_rectangle);
}