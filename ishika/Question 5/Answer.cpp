#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int test=1;test<=t;test++)
	{
		string s;
		cin>>s;
		int n= s.size();
		int flag=0;
		for(int i=1;i<n;i+=2)
		{
			if(s[i]==s[i-1])
			{
				flag=1;
				break;
			}

		}
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}
