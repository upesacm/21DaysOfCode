#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int q;
	cin>>q;
	int**outer=new int*[n];
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		outer[i]=new int[k];
		for(int j=0;j<k;j++)
		{
			cin>>outer[i][j];
		}
		
		
	}
	int outer_index;
	int inner_index;
	while(q-->0)
	{
		cin>>outer_index>>inner_index;
		cout<<outer[outer_index][inner_index]<<endl;
		return 0;
	}
}
			

