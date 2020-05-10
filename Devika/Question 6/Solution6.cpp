#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T , N , i ;
	cin>>T;
	while( T-- )
	{
		cin>>N;
		char s[N];
		cin>>s;
		for(i = 0 ; i < N ; i++)
		{
			if(s[i] >= 'a' && s[i] <='m')
				s[i] = (int)s[i] + 13;
			else if(s[i] >= 'n' && s[i] <='z')
				s[i] = (int)s[i] - 13;
			else if(s[i] >= 'A' && s[i] <='M')
				s[i] = (int) s[i] + 13;
			else if(s[i] >= 'N' && s[i] <='Z')
				s[i] = (int) s[i] - 13;
			else if(s[i] >= '0' && s[i] <='4')
				s[i] = (int) s[i] + 5;
			else if(s[i] >= '5' && s[i] <='9')
				s[i] = (int) s[i] - 5;
		}
		cout<<s;
	}
	return 0;
}
