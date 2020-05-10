#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int k;
	cin>>k;
	k=k%26;
	for(int i=0;i<n;i++)
	{
		int x=s[i];
		if(x>=65&&x<=90)
		{
			x=x-65;
			x=x+k;
			x=x%26;
			char y=(char)(x+65);
			cout<<y;
		}
		else if(x>=97&&x<=122)
		{
			x=x-97;
			x=x+k;
			x=x%26;
			char y=(char)(x+97);
			cout<<y;

		}
		else
		{
			cout<<s[i];
		}
	}
}
