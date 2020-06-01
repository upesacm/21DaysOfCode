#include <iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
    	int v1[a];
	    for(int i=0; i<a; i++)
	    {	
	    	cin>>v1[i];
	    }
	    int b;
	    cin>>b;
	    int v2[b];
	    for(int i=0; i<b; i++)
	    {
		    cin>>v2[i];
	    }
	    int count=0;
	    for(int i=0; i<a; i++)
	    {
		    if(v1[i] == v2[count]){
			    count++;
		    }
		    if(count==b){
			    break;
		    }
	    }
	    if(count==b)
		    cout<<"Yes"<<endl;
	
	    else
		    cout<<"No"<<endl;
	
	}
	return 0;
}
