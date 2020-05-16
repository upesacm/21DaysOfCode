#include<bits/stdc++.h>

#define m 1000000007

using namespace std;

int main(){
	
int t;
cin>>t;

while(t--){
	
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(x>=a && y>=b && (x+y-a-b)==c)
        cout<<"YES"<<endl;
    else if(y>=a && x>=b && (x+y-a-b)==c)
        cout<<"YES"<<endl;
    else if(x>=c && y>=b && (x+y-c-b)==a)
        cout<<"YES"<<endl;
    else if(x>=b && y>=c && (x+y-c-b)==a)
        cout<<"YES"<<endl;
    else if(x>=a && y>=c && (x+y-a-c)==b)
        cout<<"YES"<<endl;
    else if(x>=c && y>=a && (x+y-a-c)==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return 0;
}

