#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long testCase;
    cin>>testCase;
    
    while(testCase--)
    {
        int n;
        cin>>n;
        vector<long long> vect(n);
        
        for(long long i=0; i<n; i++)
            cin>>vect[i];
        
        if(vect[0]==10 || vect[0]==15)
            cout<<"NO"<<endl;
        else
        {
            long long count5=1, count10=0, count15=0;
            int flag=0;
            for(long long i=1; i<n; i++)
            {
                if(vect[i]==5)
                    count5++;
                else if(vect[i]==10)
                {
                    if(count5 == 0)
                    {
                        cout<<"NO"<<endl;
                        flag++;
                        break;
                    }
                    else
                    {
                        count5--;
                        count10++;
                    }
                }
                else if(vect[i]==15)
                {
                    if(count10==0)
                    {
                        if(count5<2)
                        {
                            cout<<"NO"<<endl;
                            flag++;
                            break;
                        }
                        else
                        {
                            count5 -= 2;
                            count15++;
                        }
                    }
                    else
                    {   
                        count10--;
                        count15++;
                    }
                }
            }
            if(flag == 0)
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
