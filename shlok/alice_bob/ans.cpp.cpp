#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a_triplet(3);
	vector<int> b_triplet(3);
	int alice_point=0;
	int bob_point=0;
	for(int i=0;i<3;i++)
	{
		cin>>a_triplet[i];
		
	}
	for(int i=0;i<3;i++)
	{
		cin>>b_triplet[i];
	}
	for(int i=0;i<3;i++)
	{
		if(a_triplet[i]>b_triplet[i])
		{
			alice_point++;
		}
		if(a_triplet[i]<b_triplet[i])
		{
			bob_point++;
		}
	}
	cout<<alice_point<<" "<<bob_point<<endl;
	return 0;
}
