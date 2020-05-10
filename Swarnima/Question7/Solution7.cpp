#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    vector<string> v;
    for(int i=0; i<n; i++){
        cin>>s;
        v.push_back(s);
        reverse(v[i].begin(),v[i].end());
        if(s==v[i]){
            cout<<"YES "<<((s.size()%2==0)?"EVEN":"ODD")<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}