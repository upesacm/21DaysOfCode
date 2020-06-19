#include <iostream>
using namespace std;

int main() {
	
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    int n;
	    cin>>n; 
	    int k=1;
	    int arr[n][n];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	            arr[i][j]=k++;
	    }
	    
	    if(n%2!=0)
	    {
	        for(int i=0; i<n; i++)
	        {
	            for(int j=0; j<n; j++)
	                cout<<arr[i][j]<<" ";
	           cout<<endl;
	        }
	    }
	    else
	    {
	        for(int i=0; i<n; i++)
	        {
	            if(i%2==0)
	            {
	                for(int j=0; j<n; j++)
	                    cout<<arr[i][j]<<" ";
	               cout<<endl;
	            }
	            else
	            {
	                for(int j=n-1; j>=0; j--)
	                    cout<<arr[i][j]<<" ";
	                cout<<endl;    
	            }
	        }
	    }
	       
	}
	
	return 0;
}
