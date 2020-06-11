#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	int count = 0;
	int sum = 0;
	cin>>n;
	vector<int> v(n);

	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}
	int x;
	cin>>x;

	while(x--)
	{
		int r;
		cin>>r;
		for(int i=0; i<n; i++)
		{
			if(v[i]<=r)
			{
				count++;
				sum += v[i];
			}
		}
		cout<<count<<" "<<sum<<endl;
		count = 0;
		sum = 0;
	}
	return 0;
}