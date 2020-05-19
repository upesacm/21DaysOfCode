#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
ll int t;
cin>>t;

while(t--)
{
    string s;
    cin>>s;
    ll ans=stoll(s);
    for(int i=0;i<s.length();i++)
    {
        string temp=s.substr(0,i)+s.substr(i+1);
        ll temp1=stoll(temp);
        ans=min(temp1,ans);

    }

cout<<ans<<endl;

}


}









