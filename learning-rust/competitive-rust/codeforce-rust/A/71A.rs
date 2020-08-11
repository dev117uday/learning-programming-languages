use std::io;

fn main(){

    let mut xstr = String::new();
    io::stdin().read_line(&mut xstr).expect("Error");
    let trimmed = xstr.trim();
    let mut number = match trimmed.parse::<u32>(){
        Ok(i) => i,
        Err(..) => 0,
    };

    while number != 0 {

        let mut xstr = String::new();
        io::stdin().read_line(&mut xstr).expect("Error");
        let trimmed = xstr.trim();

        if trimmed.len() > 10 {
            let first : char = trimmed.to_string().as_bytes()[0] as char;
            let last : char=  trimmed.to_string().as_bytes()[trimmed.len()-1] as char;
            let len = trimmed.len() - 2;
            println!("{}{}{}",first,len,last);
        } else {
            println!("{}",trimmed);
        }
        number = number - 1;
    }

}