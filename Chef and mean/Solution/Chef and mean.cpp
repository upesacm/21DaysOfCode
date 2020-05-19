#include <iostream>

using namespace std;

typedef long double ll;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    ll a[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    
	    ll sum=0,avg,num;
	    for(int i=0; i<n; i++)
	    sum+=a[i];
	    avg=sum/n;
	    num=sum-avg*(n-1);
	    int flag=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]==num)
	        {
	            cout<<i+1<<endl;flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<"Impossible"<<endl;
	    
	}
	return 0;
}

