#include <iostream>
using namespace std;


int main() {
    
    int testCase;
    cin>>testCase;
    while(testCase--){
        
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int max_sum = 0; 
        int arr1[n], arr2[n]; 
        
        for (int i = 0; i < n; i++) { 
            arr2[i] = arr[i]; 
            arr1[i] = arr[i]; 
        } 
      
        for (int i = 1; i < n; i++) 
            for (int j = 0; j < i; j++) 
                if (arr[i] > arr[j] && arr1[i] < arr1[j] + arr[i]) 
                    arr1[i] = arr1[j] + arr[i]; 
      
        for (int i = n; i >= 0; i--) 
            for (int j = n-1; j > i; j--) 
                if (arr[i] > arr[j] && arr2[i] < arr2[j] + arr[i]) 
                    arr2[i] = arr2[j] + arr[i]; 
      
        for (int i = 0; i < n; i++) {
            int sum = (arr2[i] + arr1[i] - arr[i]);
            max_sum = max(max_sum, sum ); 
        }
            
        cout<<max_sum<<endl;
}
	return 0;
}
