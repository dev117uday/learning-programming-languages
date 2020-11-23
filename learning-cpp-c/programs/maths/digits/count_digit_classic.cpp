#include <iostream>

using namespace std;

int main(){

	int n = 0;
	cin >> n;

	int i=0;
	while (n!=0) {
		n = n/10;
		++i;
	}

	cout << "Number of digits : " << i << "\n";

}