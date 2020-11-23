#include <iostream>

using namespace std;

int sum_of_elements_in_array(int* numarr, int size){
    int sum=0;
    for(int i=0; i<size;++i){
        sum += numarr[i];
    }
    return sum;
}

int main()
{
    unsigned int size=0;
    cout << "Size : ";
    cin >> size;

    int* numarr = new  int[size];
    for(int i=0; i<size;++i){
        cout << "N : ";
        cin >> numarr[i];
    }

    int sum = sum_of_elements_in_array(numarr,size);
    cout << "Sum : " << sum << endl;

    delete [] numarr;

}