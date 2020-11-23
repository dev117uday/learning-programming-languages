#include <iostream>

using namespace std;

unsigned int fibonacci_fast(unsigned int n) {
    
    if(n<=1){
        return n;
    }
    
	unsigned int a = 0, b=1;

    for (int i = 0; i <n; i++)
    {
        a = a+b;
        b = a-b;
        cout << a << "||" << b << "\n";
    }
    
    return a;
}

int main(){

	cout << "Number : " << fibonacci_fast(10) << "\n";

}