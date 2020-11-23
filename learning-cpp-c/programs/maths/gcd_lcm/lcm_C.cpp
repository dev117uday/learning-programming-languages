#include <iostream>

using namespace std;

unsigned long long lcm_of_two_numbers(unsigned long long x, unsigned long long y)
{
  unsigned long long gcd = 0, lcm = 0;
  unsigned long long big = (x>y) ? y : x;

  for(unsigned long long i=1; i<= big; ++i)
  {
    if( x%i==0 && y%i==0 ) 
      gcd = i;
  }

  return (x*y)/gcd;
}

int main()
{
  unsigned long long firstnum=0 , secondnum=0;
  cin >> firstnum >> secondnum;
  cout << lcm_of_two_numbers(firstnum,secondnum) << endl;   
}