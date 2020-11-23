#include <iostream>

using namespace std; 

unsigned long int gcd_of_two_numbers(unsigned int first, unsigned int second){

	if (second == 0){
		return first;
	}
	cout << first << "||" << second << "\n";
	return gcd_of_two_numbers(second,first%second);

}

int main(){

	unsigned int first_num =0, second_num=0;
    cout << "X = ";
    cin >> first_num;
    cout << "Y = ";
    cin >> second_num;
	if (first_num > second_num){
		cout << "output = " << gcd_of_two_numbers(first_num,second_num) << endl;
	} else
	{
		cout << "output = " << gcd_of_two_numbers(second_num,first_num) << endl;
	}   

}