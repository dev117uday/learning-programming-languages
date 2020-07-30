struct Rectangle {
	width : u32,
	height : u32
}

impl Rectangle {
	fn compare_area(&self , other : &Rectangle) -> bool {
		self.height*self.width > other.height*other.width
	}
}

impl Rectangle {
	fn compare_size(&self, other:&Rectangle) -> bool {
		self.height > other.height && self.width > other.width
	}
}

fn main(){
	let rect1 = Rectangle {
		width : 40,
		height : 50
	};
	let rect2 = Rectangle {
		width : 200,
		height: 1
	};
	println!("Is rect1 bigger than rect2 : {}",rect1.compare_area(&rect2));
	println!("Is rect1 bigger than rect2 : {}",rect2.compare_area(&rect1));
	println!("Is rect1 bigger than rect2 : {}",rect1.compare_size(&rect2));
	println!("Is rect1 bigger than rect2 : {}",rect2.compare_size(&rect1));
}