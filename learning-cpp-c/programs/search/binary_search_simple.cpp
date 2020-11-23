#include <iostream>

using namespace std;

int simple_binary_search(int* numarr, int size,int num){

    int l=0,r=size-1;
    while(r>=l){
        int mid = l+(r-l)/2;
        if(numarr[mid]==num){
            return mid;
        }
        else if(numarr[mid]>num){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    } 
    return -1;
}

int main()
{
    unsigned int size=0;
    
    cout << "Size :";
    cin >>size;
    
    int* numarr = new int[size];
    for(int i=0;i<size;++i){
        cout << "N : ";
        cin >> numarr[i];
    }

    int num;
    cout<< "Search for : ";
    cin>> num;

    int index = simple_binary_search(numarr,size,num);
    cout << "element found at : " << index+1 << " : " << numarr[index] << endl;   

}