#include <iostream>
#include <vector>

using namespace std;

long long get_fibonacci_partial_sum_naive(unsigned long long from, unsigned long long to) {
    std::vector<long long> a(60);
    long long sum = 0;
    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < 60; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    from = from % 60;
    to = to % 60;

    if (to < from)
        to += 60;
    
    for (int j = from; j < to + 1; ++j)
        sum += a[j % 60];

    return sum % 10;
}

int main() {
    unsigned long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
}