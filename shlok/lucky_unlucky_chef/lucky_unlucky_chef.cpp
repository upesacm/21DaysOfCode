#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int t=0;t<=T;t++)
	{
		int x,y,K,N,P,C;
		cin>>x>>y>>K>>N;
		for(int i=1;i<=N;i++)
		{
			cin>>P>>C;
			if(C<=K)
			{
				cout<<"Luckychef"<<endl;
			}
			else
			{
				cout<<"unluckychef"<<endl;
			}
		}
	}
	return 0;
}
