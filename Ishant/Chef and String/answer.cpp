#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(i==s.size()-1)
                break;
            if(s[i] != s[i+1])
            {
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}