#include <iostream>

using namespace std;

int square_sum_fibonacci(unsigned long long num){
    if(num<=1){
        return num;
    }

    unsigned long long first  = 1;
    unsigned long long second = 1;
    unsigned long long sum    = 1;
    num = num % 60;

    if(num == 0){
        return num;
    }

    for(unsigned long long i = 0; i<num-1 ; ++i ){
        sum = sum + (first%10)*(first%10);
        first = first + second;
        second = first - second;
    }
    return (int)sum%10;
}

int main(){

    unsigned long long num = 0;
    cin >> num;
    cout << square_sum_fibonacci(num) << "\n";

}