#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);

	for(int i=0; i<n; i++)
		cin>>v[i];
	sort(v.begin(), v.end());
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		int low=0, high=n-1;
		while(low<=high)
		{
			int mid = low+(high-low)/2;
			if(v[mid]<x)
				low = mid+1;
			else if(v[mid]>x)
				high = mid-1;
			else
			{
				cout<<mid+1<<endl;
				break;
			}
		}	
	}
	return 0;
}
