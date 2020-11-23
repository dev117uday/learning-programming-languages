#include <iostream>

int get_pisano_period(int m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
	return 0;
}


int main(){

	std::cout << "pisano period : " << get_pisano_period(1000) << "\n";
	

}