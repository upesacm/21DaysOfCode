#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        ll a[n];
        
        string ans = "";
        for(int i = 0 ; i < n ; i  ++)
        {
            cin >> a[i];
        }
        int prev = a[0];
        int i = 0;
        while( i < n )
        {
            int j = i + 1;
            while( j <  n && a[j] == a[j - 1] + 1)
            {
                j++;
            }
            if( j - i >= 3)
            {
                if(ans != "")
                ans += ",";
                ans += to_string(a[i]);
                ans += "...";
                ans += to_string(a[j - 1]);
            }
            else
            {
                for(int k = i ; k < j; k ++)
                {
                    if(ans != "")
                    ans += ",";
                    ans += to_string(a[k]);
                }
                
            }
            i = j;
            
        }
        cout << ans << endl;
        
    }
}


