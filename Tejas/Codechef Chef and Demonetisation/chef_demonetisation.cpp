#include<bits/stdc++.h>
using namespace std;

int main(){
    long long testCase;
    cin>>testCase;
    while(testCase--)
    {
       long long s,n;
       cin>>s>>n;
       
       if(s==1)
        cout<<1<<endl;
       else
       {
            long long count=0;
            if(n>=s)
                n=s;
            if(n%2)
                n--;
            while(s)
            {
                count += s/n;
                s %= n;
                if(s%2==0) 
                    n=s;
                else
                    n=s-1;
                if(s==1)
                {
                    count++;
                    break;
                }
            }
            cout<<count<<endl;
       }
    }
return 0;  
} 

