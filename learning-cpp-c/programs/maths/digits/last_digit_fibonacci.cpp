#include <iostream>

using namespace std;

unsigned int fibonacci_fast(unsigned int n) {
    
    if(n<=1){
        return n;
    }
    
	long long a = 0, b=1;

    for (int i = 0; i <n; i++)
    {
        a = a+b;
        b = a-b;
    }
    
    return a%10;
}

int main()
{
	unsigned int num = 0 ;
	cin >> num ;
	cout << fibonacci_fast(num%60) << "\n";

}