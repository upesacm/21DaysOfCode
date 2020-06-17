#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum_initial=0;
        int sum_final=0;
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        
        for(int i=0; i<n; i++)
        {
            sum_initial += v[i];
            if(v[i]>k)
                v[i] = k;
            sum_final += v[i];
        }
        int ans = sum_initial - sum_final;
        cout<<ans<<endl;
    }
    return 0;
}