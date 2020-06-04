#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long powe(long long n, long long x)
{
	if(x==0)
		return 1;
	if(x==1)
		return n;
	if(x%2==0)
	{
		long long m=powe(n,x/2);
		return (m*m)%MOD;
	}
	if(x%2==1)
	{
		long long m=powe(n,x/2);
		m=(m*m)%MOD;
		return (m*n)%MOD;
	}
}
int main()
{
    long long testCase, n, size, len;
    cin>>testCase;
    
    while(testCase--)
    {
        cin>>n;
        char str[100000];
        cin>>str;
        
        size=strlen(str);
        
        len=n-size;
        if(len<=0)
            cout<<"0\n";
        else
        {
            	long long m=(powe(26,len)+25 * size * powe(26,len-1)) % MOD;
            	cout<<m<<"\n";
        }
    }
}