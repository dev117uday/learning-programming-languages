#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

impl Rectangle {
	fn area(&self) -> u32 {		self.width * self.height    }
	fn parameter(&self) -> u32 {	2*self.width+2*self.height	}
}

fn main() {
    let rect1 = Rectangle {
        width: 30,
        height: 50,
    };
	println!("The area of the rectangle is {} square pixels.",rect1.area());
	println!("The parameter of the rectangle is {} square pixels.",rect1.parameter());
}