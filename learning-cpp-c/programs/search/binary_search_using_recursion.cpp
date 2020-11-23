#include <iostream>

using namespace std;

int binary_search_using_recursion(int* numarr,int num,int l,int r){
    
    if(r>=l){
        int mid=l+(r-l)/2;
        if(numarr[mid]==num){
            return mid;
        }
        else if(numarr[mid]>num){            
            binary_search_using_recursion(numarr,num,l,mid-1);
        }else{
            binary_search_using_recursion(numarr,num,mid+1,r);
        }
    }
    return -1;      

}

int main(){
    unsigned int size=0;
    cout<< "Size :";
    cin>> size;
    
    int* numarr = new int[size];
    for(int i=0;i<size;++i){
        cout<<"N : ";
        cin>>numarr[i];
    }
    int num=0;
    cout<< "To search : ";
    cin >> num;
    int l=0,r=size-1;
    int index = binary_search_using_recursion(numarr,num,l,r);
    cout << numarr[index];
    delete [] numarr;
    cout << endl;

}