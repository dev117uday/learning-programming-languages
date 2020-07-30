fn main(){

	#[derive(Debug)]
	enum Coin {
		Penny,
	};

	//accessing enum
	let first : Coin = Coin::Penny;
	println!("{:#?}",first);

	#[derive(Debug)]
	enum CoinWithData {
		Penny,
	};

	impl CoinWithData {
		fn call(&self) {
			println!("{:#?}",&self);
		}
	}

	let second : CoinWithData = CoinWithData::Penny;
	second.call(); 

}