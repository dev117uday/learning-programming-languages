#include <iostream>
using namespace std;

int find_missing(int* arr, int size){
	
    int missing = size+1;
	
	for(int i=0; i<size; i++){
		missing ^= arr[i] ^ (i+1);
	}
	
	return missing;
}

int main() 
{
	unsigned int size=0;
    cout << "Size : ";
	cin>>size;
	
	int *input = new int[size];
	
	for(int i=0; i<size; i++){
		cin>>input[i];
	}
	
	int missing = find_missing(input, size);
	
	cout<< "Missing elements is : " << missing << endl;
	
}