#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string k;
    cin>>k;
    int count=0;
    int m=INT_MIN;
    for(int i=0; i<k.length(); i++){
        switch(k[i]){
            case 'a': 
            case 'e':
            case 'i': 
            case 'o':
            case 'u':
                count++;
                m=max(m,count);
                break;
            default:
                count=0;
                m=max(m,count);
        }
    }
    cout<<m<<endl;
}