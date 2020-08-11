use std::io;

fn main() {
    let mut numbers = String::new();

    io::stdin()
        .read_line(&mut numbers)
        .ok()
        .expect("read error");

    let numbers: Vec<u16> = numbers
        .split_whitespace()
        .map(|s| s.parse().expect("parse error"))
        .collect();

	println!("{}",numbers[0]*numbers[1]/2 as u16);
}