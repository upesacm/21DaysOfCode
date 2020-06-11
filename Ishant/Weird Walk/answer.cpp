#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n--)
	{
	    int x;
	    cin>>x;
	    int a[x];
	    int b[x];
	    for(int i=0; i<x; i++)
	        cin>>a[i];
	    for(int i=0; i<x; i++)
	        cin>>b[i];
	    int alice=0, bob=0, distance=0;
	    
	    for(int i=0; i<x; i++)
	    {
	        if(alice == bob && a[i] == b[i])
	        {
	            alice += a[i];
	            bob += b[i];
	            distance += a[i];
	        }
	        else
	        {
	            alice += a[i];
	            bob += b[i];
	        }
	    }
	    cout<<distance<<endl;
	}
	return 0;
}
