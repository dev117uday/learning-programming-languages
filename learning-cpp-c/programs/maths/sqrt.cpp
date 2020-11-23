#include <iostream>
#include <iomanip>  
#include <math.h>

using namespace std;

double square_root(unsigned int* number){

	long double temp = *number;
	for (int i=0; i<20; ++i){
		temp = 0.5*(temp + (*number/temp));
	}
	return temp;
}

int main(){

	unsigned int number = 0;
	cout << "Enter a number : ";
	cin >> number;

	double b = sqrt(number);
	double a = square_root(&number);
	if(a==b){
		cout << "yes\n";
	}
	cout << "SquareRoot of is : " << a << "\n";
	cout << "SquareRoot using in-built funciton : " << b << "\n";
	
	// Code for stress testing
	// for(unsigned int i = 1; i<4294967294;++i){
  //       double b = (int)(sqrt(i)*10000)/10000;
  //       double a = (int)(square_root(&i)*10000)/10000;
	// 	if (a != b){
	// 		cout << "number : " << i << "\n";
	// 		break;
	// 	}else if (b == 6553) {
	// 		cout << "number : " << i << "\n";
	// 	}
	// }
  cout << "Perfecto" << endl;

	return 0;
}