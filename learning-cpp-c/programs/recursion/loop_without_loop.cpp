#include <iostream>

using namespace std;

void printNO(int number) {
    if (number == 1){
        cout << number << " ";
        return;
    }
    printNO(number-1);
    cout << number << " ";
    return;
}

int main(){
    int number ;
    cin >>  number;
    printNO(number);
}