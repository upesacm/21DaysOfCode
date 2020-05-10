
#include<iostream>
using namespace std;

int values(int arr[], int l, int r, int val) 
{ 
    while (r >= l)
    { 
        int mid = l + (r - l) / 2;
        if (arr[mid] == val) 
            return mid; 
        if (arr[mid] > val) 
            return values(arr, l, mid - 1, val);  
        return values(arr, mid + 1, r, val); 
    }  
    return -1; 
} 
int BinarySearch(int arr[], int n, int val)
{
    int l=0;
    int r=n-1;
    return values(arr,  l,  r,  val) ;
}
int main() {
	
	int size,val;
	cin>>size;
	int *input=new int[1+size];
	
	for(int i=0;i<size;i++)
		cin>>input[i];

	cin>>val;
	cout<<BinarySearch(input,size,val);
	return 0;
}

