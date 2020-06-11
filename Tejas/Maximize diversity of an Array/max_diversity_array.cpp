#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        long long n,k,i,j,temp;
        cin>>n>>k;
        int arr[n];
        map<long long,long long> MP;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            MP[arr[i]]++;

        }
        multiset<long long> MS;
        for(auto x:MP)
            MS.insert(x.second*(-1));
            
        long long p;
        for(i=0;i<min(k,n-1);i++)
        {
            p = *MS.begin();
            if(p ==-1)
                break;
            p++;
            MS.erase(MS.begin());
            MS.insert(p);
            MS.insert(-1);
        }
        long long sum=0, count=0;
        for(auto x:MS)
        {
            sum += (n+x+count)*x*(-1);
            count += x;
        }
        cout<<sum<<'\n';
    }
}
