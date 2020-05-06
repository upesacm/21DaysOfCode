#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int testCase;
    cin>>testCase;
    
    while(testCase--)
    {
        string S;
        cin>>S;
        string R,L;
        int length;
        
        length = S.length();
        L = S.substr(1) + S[0];
        //cout<<L<<endl;
        R = S[length-1] + S.substr(0, length-1);
        //cout<<R<<endl;
        
        if(L == R)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}

