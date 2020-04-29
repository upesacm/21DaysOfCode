#include<iostream>
using namespace std;

int max_sum_subarray(int arr[], int size)
{
    int max_end = 0, max_sum_here = 0;

    for(int i=0; i<size; i++)
    {
        max_end = max_end + arr[i];
        
        if(max_sum_here < max_end)
            max_sum_here = max_end;

        if(max_end < 0)
            max_end = 0;        
    }
    
	return max_sum_here;
}

int main()
{
	int arr[] = {-4, -2, 4, -1, 5, -2, 3, -9}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_sum = max_sum_subarray(arr, n);
    cout<<"Max contiguous subarray sum is: "<< max_sum;
    return 0;
}


