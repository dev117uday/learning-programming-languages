trait Shape {
	fn area(&self) -> f32;
}

struct Rectangle {
	x : u32,
	y : u32,
}

struct Circle {
	radius : f32,
}

impl Shape for Rectangle {
	fn area(&self) -> f32 {
		self.x as f32*self.y as f32
	}
}

impl Shape for Circle {
	fn area(&self) -> f32 {
		3.141571*self.radius*self.radius
	}
}

fn main(){

	let rect = Rectangle {
		x :30,
		y:20,
	};
	let pie = Circle {
		radius : 40.133291979
	};

	println!("Area rect : {}",rect.area());
	println!("Area circle : {}",pie.area());

}