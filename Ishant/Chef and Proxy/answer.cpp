#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n--)
	{
	    int d;
	    cin>>d;
	    char s[d];
	    int count=0, x=0;
	    for(int i=0; i<d; i++)
	    {
	        cin>>s[i];
	        if(s[i] == 'P')
	            count++;
	    }
	    
	    if((count*100)/d >= 75)
	        cout<<x<<endl;
	    else
	    {
	        for(int i=2; i<d-2; i++)
	        {
	            if((s[i] == 'A') && (s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P'))
	            {
	               	count++;
	              	x++;
	            }
	            
	            if((count*100)/d >= 75)
	            {
	            	cout<<x<<endl;
	                break;
	            }
	        }
	        if((count*100)/d < 75)
	            cout<<"-1"<<endl;
	    }
	}
	return 0;
}
