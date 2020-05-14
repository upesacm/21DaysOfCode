#include<bits/stdc++.h>
using namespace stdl;

#define INT_BITS 32

int maxSubarrayXOR(int [], int n);
int main()
{
	int testCase,n,k;
	int arr[100004];
	
	cin>>testCase;
	while(testCase--)
	{
		cin>>n;
		for(int i=0; i<n; i++)
			cin>>arr[i];
	}
	
	cout<<maxSubarrayXOR(arr,n);
}

int maxSubarrayXOR(int A[], int n)
{
    int index = 0; 
  
    for (int i = INT_BITS-1; i >= 0; i--) 
    { 
        int maxIndex = index; 
        int maxElement = INT_MIN; 
        for (int j = index; j < n; j++) 
        {  
            if ( (A[j] & (1 << i)) != 0  && A[j] > maxElement ) {
                maxElement = A[j];
                maxIndex = j;
            }
        } 
        
        if (maxElement == INT_MIN) 
        continue; 
        swap(A[index], A[maxIndex]); 
        maxIndex = index; 
        
        for (int j=0; j<n; j++) 
        { 
            if (j != maxIndex && (A[j] & (1 << i)) != 0) 
                A[j] = A[j] ^ A[maxIndex]; 
        } 
        index++; 
    } 
    
    int ans = 0; 
    for (int i = 0; i < n; i++) 
        ans ^= A[i]; 
    return ans; 
}
