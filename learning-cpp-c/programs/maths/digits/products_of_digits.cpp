/*
    Program Description program to find the product of digits of number
    Function Name : product_of_digits_of_a_number(string) -- return type int
*/

#include <iostream>
#include <string>

using namespace std;

int product_of_digits_of_a_number(long number_string)
{
    int product = 1;
    while(number_string!=0)
    {
        if(number_string%10==0)
            continue;
        else
        {
            product*=number_string%10;
            number_string/=10;
        }
    }
    return product;
}

int main()
{
    long number_string;
    cout << "Input = " ;
    cin >> number_string;   
    cout << "output = " << product_of_digits_of_a_number(number_string) << endl;    
}