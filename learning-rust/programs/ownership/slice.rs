fn main(){
	let mut s = String::from("Hellox World");
	let x = first_word(&s);
	s.clear(); 
	print!("s {}",s);
	print!("\nx : {}\n",x);
	s.clear(); 
	print!("\nx : {}\n",x);
	/* this empties the String, making it equal to ""
    word still has the value 6 here, but there's no more string that
	we could meaningfully use the value 5 with. word is now totally invalid! */
	
	let s1 = String::from("hello world");

	let len = s1.len();
    let hello = &s1[0..5];
	let world = &s1[6..11];
	let slice = &s1[3..len];
	print!("{} ## {} ## {}\n",hello,world ,slice);

}

fn first_word(s : &String) -> usize {
    let bytes = s.as_bytes();
	for (i, &item) in bytes.iter().enumerate() {
		// print!("i : {} ## item {}\n",i,item);
        if item == b' ' {
			return i;
			// or return &s[0..i];
        }
    }
	s.len()
	// or &s[..]	
}