#include <iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n--)
	{
	    int m;
		cin>>m;
		vector<int> v(m);
		for(int i=0; i<m; i++)
		    cin>>v[i];
	    
	    set<int> x;
	    set<int> y;
	    int flag=0;
	    for(int i=0; i<m; i++)
	    {
	        int count=0;
	        if(x.find(v[i]) != x.end())
	        {
	            flag=1;
	            cout<<"NO"<<endl;
	            break;
	        }
	        else
	        {
	            x.insert(v[i]);
	            while(i<m-1 && v[i+1]==v[i])
	            {
	                i++;
	                count++;
	            }
	        }
	        
	        if(y.find(count) != y.end())
	        {
	            flag=1;
	            cout<<"NO"<<endl;
	            break;
	        }
	        
	        y.insert(count);
	    }
	    
	    if(flag==0)
	        cout<<"YES"<<endl;
	}
	return 0;
}