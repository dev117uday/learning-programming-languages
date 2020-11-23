#include <iostream>

using namespace std;

int sum_of_digits(unsigned int n)
{
    int sum=0,temp=0;
    while(n>0){
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    return sum;
}

int main()
{
    unsigned int number = 0;
    cout << "Enter the number : ";
    cin >> number;
    cout << "answer : " << sum_of_digits(number) << endl;
}