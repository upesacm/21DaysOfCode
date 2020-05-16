#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n],y[n],i,a,b;
        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        bool check=false;
        cin>>a>>b;
        for(i=0;i<n;i++)
        {
            if(x[i]-1==a || x[i]+1==a)
            {
                if(y[i]-2==b || y[i]+2==b)
                {
                    check=true;
                    break;
                }
            }
            if(x[i]-2==a || x[i]+2==a)
            {
                if(y[i]-1==b || y[i]+1==b)
                {
                    check=true;
                    break;
                }
            }
        }
        if(check == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
