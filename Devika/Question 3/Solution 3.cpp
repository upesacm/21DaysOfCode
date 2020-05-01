#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        string right,left;
        int len;
        len= S.length();
        left= S.substr(1) + S[0];
        right= S[len-1] + S.substr(0,len-1);
        if (left ==right)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
