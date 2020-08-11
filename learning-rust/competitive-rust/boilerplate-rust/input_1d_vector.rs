use std::io;

fn main() {
    let mut numbers = String::new();

    io::stdin()
        .read_line(&mut numbers)
        .ok()
        .expect("read error");

    let numbers: Vec<i32> = numbers
        .split_whitespace()
        .map(|s| s.parse().expect("parse error"))
        .collect();

    for num in numbers {
        println!("{}", num);
    }
}