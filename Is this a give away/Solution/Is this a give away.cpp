#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int l,r,k;
        cin>>l>>r>>k;
        if(l == r)
            cout<<"1"<<endl;
        else
            cout<<k<<endl;
    }
	return 0;
}


