#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int sum=0;
	    for(int i=1;i<=n;i=i+2)
	    {
	        sum+=(n-i+1)*(n-i+1);

	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
