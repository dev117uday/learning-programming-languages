#![allow(unused)]
fn main() {
	use std::mem;
	/// get this from crate
    let mut x = 5;
    let mut y = 42;
    println!("{} || {}",x,y);
    mem::swap(&mut x, &mut y);
    assert_eq!(42, x);
    assert_eq!(5, y);
    println!("{} || {}",x,y);

}