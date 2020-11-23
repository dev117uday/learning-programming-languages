/*
    Program Description - program to Count Number of Digits in An Integer.
    Solution Description: Using log base 10 of any number , the leading digit tells how many digits are in it
    Function Name : count_the_number_of_digits_in_integer(long long) -- return type int
  
*/


#include <iostream>
#include <math.h>

using namespace std;

//function to count the number of digits using log base 10
int count_the_number_of_digits_in_integer(long long n)
{
    if (n == 0) 
        return 0; 
    else if(n==1)
        return 1;
    else if(n<0){
        cout << "You entered a negative number" << "\n";
        count_the_number_of_digits_in_integer(-1*n);
    } else{
        return ceil(log10(n));    
    }
    return 0;
}

int main()
{
    long long n=0;
    int answer = 0;
    cout << "N = ";
    cin >> n;
    
    answer = count_the_number_of_digits_in_integer(n);
    cout << "Output = " << answer << endl;    

}