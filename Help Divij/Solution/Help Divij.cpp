#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s, ans = "";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
 
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y') continue;
 
        else 
        {
            ans = ans + '.' + s[i];
 
        }
    }
 
     
    cout << ans << endl;
}
 
int main()
{
 
    int t;
    cin >> t;
    while(t--)
        solve();
 
 
    return 0;
}
 
