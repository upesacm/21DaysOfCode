#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
n
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		ll n; string s;
		cin >> n;
		vector<string> v(n);
		cin >> s;
		for(int i = 1; i < n; i++)
		{	
			string ns;
			cin >> ns;

			for(int j = 0; j < 10; j++)
			{
				s[j] = (s[j] -'0') ^ (ns[j] - '0') + '0';
			}
		}

		int ans = 0;
		for(int k = 0; k < 10; k++)			
		{
			if(s[k] == '1')
			{
				ans++;
			}
		}

		cout << ans << "\n";
	}
	return 0;
}
