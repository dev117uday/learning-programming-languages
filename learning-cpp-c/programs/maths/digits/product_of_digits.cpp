#include <iostream>

using namespace std;

int product_of_digits(unsigned int n)
{
    int product=1,temp=0;
    while(n>0){
        temp = n%10;
        if(temp == 0){
            n=n/10;
        }
        else{
            product = product * temp;
            n = n/10;
        }
    }
    return product;
}

int main()
{
    unsigned int number = 0;
    cout << "Enter the number : ";
    cin >> number;
    cout << "answer : " << product_of_digits(number) << endl;
}