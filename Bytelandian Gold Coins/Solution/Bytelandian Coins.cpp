#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll calc(ll n,ll a[])
{
   long long  int s;
        if(n<=11)
             return n;
          if(a[n]!=0)
            {return a[n];}
              else{s=max(n,(calc(n/2,a)+calc(n/3,a)+calc(n/4,a)));
              a[n]=s;
            }
            
           

}

int main()
 {
     long long  int n;
      ll *a;
         while(scanf("%lld",&n)==1)
         {
             a= new ll[n+1];
             ll ans=calc(n,a);
             cout<<ans<<endl;

         }

   return 0;
}

