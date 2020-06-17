#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    
    while(t--)
    {
        long long x;
        cin>>x;
        long long ans=0;
        if(x%2 != 0)
            ans = (x)/2;
        else
        {   
            long long ts=x;
            long long count=0;
            while(ts%2 == 0)
            {
                count++;
                ts = ts/2;
            }
            ans = x/(long long)(pow(2, count+1));
        }
        cout<<ans<<endl;
    }
    return 0;
}