#include <iostream>

unsigned int get_pisano_period(unsigned int m) {
    unsigned int a = 0, b = 1, c = a + b;
    for (unsigned int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) {
            return i + 1;
        }
    }
    return 0;
}

unsigned int get_fibonacci_huge(unsigned long long n, unsigned int m) {

    unsigned int remainder = n % get_pisano_period(m);

    unsigned long long first = 0;
    unsigned long long second = 1;
    unsigned long long res = remainder;

    for (unsigned long long i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}

int main() {
    unsigned long long n = 0 ;
    unsigned int m = 0;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge(n, m) << '\n';
}