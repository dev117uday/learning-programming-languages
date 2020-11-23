#include <iostream>

int get_change(int n) {
    int coins[] = {10, 5, 1};
    int min = 0;

    for (int i = 0; n > 0; i++) {
        min += n / coins[i];
        n %= coins[i];
    }
    return min;
}

int main() {
	unsigned int m;
	std::cin >> m;
	std::cout << get_change(m) << '\n';
}
