// 4003600000000014 paste to get 20 as answer

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   long long credit = 0, digit = 0;
   cout << "credit card number : ";
   cin >> credit ;
   int sum=0 , len = ceil(log10(credit));
   cout << len << endl;
   for (int i=1; i <= len; ++i )
   {
      digit = credit%(long long)pow(10,i);
      digit = digit/(long long)pow(10,i-1);
      if (i%2==0){
        digit *= 2;
        if (digit>10){
           digit = 1 + digit%10;
        }
        sum = sum + digit;
      }
      else{
         sum = sum +digit;
      }
   }
   cout << sum << endl;
}