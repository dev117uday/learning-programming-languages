#[derive(Debug)]
enum IpAddrKind {
    V4,
    V6,
}

#[derive(Debug)]
struct IpAddr {
	version : IpAddrKind,
	address : String
}

fn main(){

	let home = IpAddr{
		version : IpAddrKind::V4,
		address : String::from("127.0.0.1")
	};
	let office = IpAddr {
		version : IpAddrKind::V6,
		address : String::from("192.168.1.29")
	};

	println!("V4 : {:?}",home);
	println!("V6 : {:?}",office);

}