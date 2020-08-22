#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> v(n);
        
        for(long long i=0; i<n; i++)
            cin>>v[i];
        
        if(v[0]==10 || v[0]==15)
            cout<<"NO"<<endl;
        else
        {
            long long five=1, ten=0, fifteen=0;
            int flag=0;
            for(long long i=1; i<n; i++)
            {
                if(v[i]==5)
                    five++;
                else if(v[i]==10)
                {
                    if(five == 0)
                    {
                        cout<<"NO"<<endl;
                        flag++;
                        break;
                    }
                    else
                    {
                        five--;
                        ten++;
                    }
                }
                else if(v[i]==15)
                {
                    if(ten==0)
                    {
                        if(five<2)
                        {
                            cout<<"NO"<<endl;
                            flag++;
                            break;
                        }
                        else
                        {
                            five = five-2;
                            fifteen++;
                        }
                    }
                    else
                    {   
                        ten--;
                        fifteen++;
                    }
                }
            }
            if(flag == 0)
                cout<<"YES"<<endl;
        }
    }
    return 0;
}