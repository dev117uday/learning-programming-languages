#include <iostream>

using namespace std;

bool amstrong_checker(unsigned int num)
{
    int temp=0, checker=0, rem=0;
    checker = num;
    while(num!=0)
    {
        rem = num%10;
        temp = (temp) + rem*rem*rem;
        num = num/10;
    }

    if(checker==temp)
        return true;
    else
        return false;
       
}

int main()
{
    unsigned int num = 0;
    cout << "Number : " ;
    cin >> num ;
    bool answer = amstrong_checker(num);

    if (answer)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}