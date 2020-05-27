#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

        long long int n;
        cin>>n;
        vector<long long> vect1(n),vect2(n,0);
        for(long long int i=0; i<n; i++)
        {
            cin>>vect1[i];
        }

        stack<long long> S;

        for(long long int i=n-1; i>=0; i--)
        {
            while(S.empty()!=1 && vect1[i] >= vect1[S.top()])
                S.pop();

            if(S.empty()!=1)
                vect2[i] = S.top() - i;
            else
                vect2[i] = n - i;

            S.push(i);
        }

        int query;
        cin>>query;
        while(query--){
            long long int l,r;
            cin>>l>>r;
            long long int res = 0;
            while(l <= r && l < n){
                res++;
                l += vect2[l];
            }
            cout<<res<<endl;
        }
    return 0;
}
