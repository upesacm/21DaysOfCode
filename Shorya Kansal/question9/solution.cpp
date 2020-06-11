#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,max=0,c=0,f=1,t;
	cin>>n;
	long long int a[n];
	stack <long long int> st;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			st.push(a[i]);
			t++;
			if(t>1)
				c=0;
		}
		else if(a[i]<0 && i>0&&!st.empty())
		{
			t=0;
				if(st.top()==(-1*(a[i])) && !st.empty())
				{
					c=c+2;
					st.pop();
					if(max<c)
						max=c;
				}
				else if(!st.empty())
				{
					c=0;
					while(st.size())
						st.pop();
				}
			}
	}
	cout<<max;
	}
	