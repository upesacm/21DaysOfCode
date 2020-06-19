#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--)
    {
        long long n;
        cin>>n;
        long long val=0;
        if(n%2 != 0)
            val = n/2;
        else
        {
            long long ts = n;
            long long count = 0;
            while(ts%2 == 0)
            {
                count++;
                ts /= 2;
            }
            count = pow(2, count+1);
            val = n/count;
        }
        cout<<val<<endl;
    }
}