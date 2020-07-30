enum Direction {
	Up,
	Down,
}

fn main(){
	let upkey = Direction::Up;

	match upkey {
		Direction::Up => println!("We are going up"),
		Direction::Down => println!("We are crashing and going down"),
	}
}