mod front_of_house {
    pub mod hosting {
        pub fn add_to_waitlist() {
            println!("W")
        }
    }
//     mod serving {
//         fn take_order() {}
//         fn serve_order() {}
//         fn take_payment() {}
//     }
}

mod back_of_house {
    pub enum Appetizer {
        Soup,
        Salad,
    }
}

pub fn eat_at_restaurant() {
    front_of_house::hosting::add_to_waitlist();
    let order1 = back_of_house::Appetizer::Soup;
    let order2 = back_of_house::Appetizer::Salad;

    match order1 {
        back_of_house::Appetizer::Soup => println!("Hello from Soup"),
        back_of_house::Appetizer::Salad => println!("Hello from Salad")
    }
    match order2 {
        back_of_house::Appetizer::Soup => println!("Hello from Soup"),
        back_of_house::Appetizer::Salad => println!("Hello from Salad")
    }
}


