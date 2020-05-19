#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,m,fail=0;
        cin>>n;
        int arr[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       m=n/4;
       sort(arr,arr+n);
       for(int i=m;i<n;i+=m)
       {
           for(int j=0;j<i;j++)
           {
              if(arr[j]>=arr[i])
              {
                  fail=1;
                  break;
              }

           }
           if(fail==1) break;
       }
       if(fail==1) cout<<-1<<endl;
       else
       {
           for(int i=m;i<n;i+=m)
            cout<<arr[i]<<"  ";
           cout<<endl;
       }
    }
}

