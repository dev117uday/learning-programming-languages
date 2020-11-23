/*
  Program Description - This prgram to find factorial of a number
  Time Complexity: O(n)  
    Function Name : factorial(int) -- return type int   
  
*/

#include <iostream>

using namespace std;

// function to calculate factorial 
int factorial(int n)
{
    int fact=1;
    while (n>0)
    {
        fact = fact*n;
        --n;
    }
     
    return fact;

}

int main()
{
    unsigned int n=0, answer = 0;
    
    cout << "N = ";
    cin>>n;
    if(n==0){                       // factorial of 0 is 1
        cout << "Output = 1" <<endl;
        exit(-1);
    }
    else {
        answer = factorial(n);      // calling the factorial function
    }
    cout << "Output = " << answer << endl;


}