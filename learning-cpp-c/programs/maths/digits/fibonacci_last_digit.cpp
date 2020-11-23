#include <iostream>

unsigned int get_fibonacci_last_digit_naive(unsigned int n) {
    n = n%60;   
    if(n<=1){
        return n;
    }
    
	long long a = 0, b=1;

    for (unsigned int i = 0; i < n; i++)
    {
        a = a+b;
        b = a-b;
    }
    
    return a%10;
}

int main() {
    unsigned int n;
    std::cin >> n;
    std::cout << get_fibonacci_last_digit_naive(n) << '\n';
}
