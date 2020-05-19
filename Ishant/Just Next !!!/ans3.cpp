#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,temp;
	cin>>n;
	for(int l=0; l<n; l++)
	{
		int x,y;
		cin>>x;
		int	index=0;
		int smallest=0;
		int number;
		vector<int> v(x);
		for(int i=0; i<x; i++)
		{
			cin>>v[i];
		}
		for(int i=x-1; i>0; i--)
		{
			if(v[i]>v[i-1])
			{
				index=i;
				smallest = i;
				break;
			}
		}
		if(index==0)
			cout<<"-1"<<endl;
		else
		{	
			
			for(int j=index+1; j<x; j++)
			{
				if(v[j]>v[index-1] && v[j]<v[index])
					smallest = j;
			}
			swap(v[index-1], v[smallest]);
			sort(v.begin()+index, v.end());
			for(int i=0; i<x; i++)
			{
				cout<<v[i];
			}
			cout<<endl;
			v.clear();
		}
	}
	return 0;
}