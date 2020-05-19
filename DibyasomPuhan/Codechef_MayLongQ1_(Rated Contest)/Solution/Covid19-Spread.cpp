#include<bits/stdc++.h>

using namespace std;

int solve()
{
	int n,streak=1,prev_streak,len=8,max_len=0,temp=0; cin >> n; bool flag=true;
	vector<int> loc(n); vector<int> streaks(n+1); streaks[0]=1;
	cin >> loc[0];
	
	for(int i=1;i<n;i++)
	{
		cin >> loc[i];
		if(loc[i]-loc[i-1]<=2)
		streak++;
		else
		streak=1;
		
		streaks[i]=streak;
		
		max_len=(streak>max_len)?streak:max_len;
	}
	streaks[n]=1;
	for(int i=1;i<=n; i++)
	{
		temp = streaks[i];
//		cout << "*" << temp << endl;
		if(temp==1)
		{
			len=(streaks[i-1]<len)?streaks[i-1]:len;
		}
	}
	cout << len << " " << max_len << endl;
	
}

int main()
{
  	int t; cin >> t;
  	while(t--)
  	{
  		solve();
    }
  	
  	return 0;
}
