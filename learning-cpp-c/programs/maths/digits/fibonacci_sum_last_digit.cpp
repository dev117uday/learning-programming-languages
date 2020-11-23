#include <iostream>

int fibonacci_sum_naive(unsigned long long n) {
    if (n <= 1)
        return n;
    
    unsigned int temp = n%60;
    unsigned long long a=1, b=1, sum=2;

    if(temp == 0){
        return 0;
    }

    for (unsigned int i = 1; i < temp -1 ; i++)
    {
        a = a+b;
        b = a-b;
        sum = sum+a;
    }

    return sum%10;
}

int main() {
    unsigned long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n)%10 << "\n";
}