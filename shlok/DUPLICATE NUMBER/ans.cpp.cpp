#include <iostream>
using namespace std;
int DuplicateNumber(int arr[], int size){
   
    int duplicate=0;
    
    for(int i=1;i<=size-2;i++)
        duplicate=duplicate^i;
    
    for(int i=0;i<size;i++)
        duplicate=duplicate^arr[i];
    
    return duplicate;

}
int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << DuplicateNumber(input, size);	
	
	delete [] input;

	return 0;
}
