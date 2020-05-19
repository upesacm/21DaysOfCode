#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n;
        while(n)
        {
            ans=ans+n%2;
            n=n/2;
        }
        cout<<ans<<endl;
    }
}
