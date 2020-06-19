#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int count=0;
        string str;
        cin>>str;
        
        for(int i=0; i<(str.size()-1); i++){
		if(str[i]=='x' && str[i+1]=='y'){
			count++;
			i++;
		}
		else if(str[i]=='y' && str[i+1]=='x'){
			count++;
			i++;
		}
	    }
	    cout<<count<<endl;
    }
    return 0;
}






