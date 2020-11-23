#include <iostream>

using namespace std;

int main()
{
    int a = 8;
    int* ptr = &a;
    *ptr = 10 ;

    int& ref = a;
    ref = 12;
    
    cout << *ptr << endl;
    cout << ref << endl;

}