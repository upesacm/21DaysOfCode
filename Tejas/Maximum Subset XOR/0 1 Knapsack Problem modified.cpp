#include<bits/stdc++.h>
using namespace std;

int main()
{
	int testCase;
	cin>>testCase;
	
	while(testCase--)
	{
		int n,w;
		cin>>n>>w;
		int val[n],wt[n];
		
		for(int i=0; i<n; i++)
			cin>>val[i];
		for(int i=0; i<n; i++)
			cin>>wt[i];
			
		int arr[n][w+1]; 
		 
		for(int i=0; i<n; i++)
			arr[i][0] = 0;
			
		for(int i=0; i<w; i++){
			if(i >= wt[0])
				arr[0][i] = val[0];
			else
				arr[0][i] = 0;
		}
		
		for(int i=1; i<n; i++)
		{
			for(int j=1; j<=w; j++)
			{
				if(j >= wt[i]){
					int x = arr[i-1][j - wt[i]] + val[i];
					
					if(arr[i-1][j] > x)
						arr[i][j] = arr[i-1][j];
					else
						arr[i][j] = x;
				}
				else
					arr[i][j] = arr[i-1][j];	
			}
		}
	
		for(int i=0; i<n; i++)
		{	
			for(int j=0; j<=w; j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
		
		if(w < *min_element(wt, wt+n))
        	cout<<"0"<<endl;
        else
            cout<<arr[n-1][w]<<endl;
	
	}
}
