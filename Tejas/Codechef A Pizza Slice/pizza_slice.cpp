#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
       long long n,x,y,z;
       int T;
       cin>>n>>T>>x>>y>>z;
       
       long long q=2*n+1,p;
       
       if(T==1)
       {
           if(x<y&&y<z)
           p=2*n-y;
           else if(x==z&&z<y)
           p=y-1;
           else if(x>y&&y>z)
           p=2*(n+1)-y;
           else if(x==z && z>y)
           p=y+1;
       }
       
       else if(T==2)
          p=2*(n-y)+1;
          
       else if(T==3)
       {
           if(x<y&&y<z)
           p=2*(n+1)-y;
           else if(x==z&&z<y)
           p=y-1;
           else if(x>y&&y>z)
           p=2*n-y;
           else if(x==z && z>y)
           p=y+1;
       }
       else
          p=2*(n-y)+1;
          
       long long g=__gcd(p,q);
       p=p/g;
       q=q/g;
       cout<<p<<" "<<q<<"\n";
    }
    return 0;
}
