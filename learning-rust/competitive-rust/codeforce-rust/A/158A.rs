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
	// numbers : first line

	let mut arrays = String::new();

    io::stdin()
        .read_line(&mut arrays)
        .ok()
        .expect("read error");

    let arrays: Vec<i32> = arrays
        .split_whitespace()
        .map(|s| s.parse().expect("parse error"))
        .collect();

	// arrays contain input

	if arrays[0] == 0 {
		println!("0");
		std::process::exit(0);
	}

	if numbers[1] == arrays.len() as i32 {
		println!("{}",numbers[1]);
		std::process::exit(0);
	}

	let start = (numbers[1]-1) as usize;
    let end = (numbers[0]-1) as usize;
    let xs : Vec<i32> = (&arrays[start..end]).to_vec();

    let mut xx = &xs[0];
    let mut ith = 0;
    for i in xs.iter(){
        if i!=xx{
            ith = ith +1;
            break;
        }
        xx = i;
    } 
    if ith == 0 {
        println!("{}",arrays.len());
    } else {
        println!("{}",arrays.len()-xs.len()+(ith as usize));
    }
    
}