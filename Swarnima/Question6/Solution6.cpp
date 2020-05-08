#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int x, count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
               x=a[i][j];
               for(int i1=0; i1<=i; i1++){
                   for(int j1=0; j1<=j; j1++){
                       if(x<a[i1][j1]){
                          count++;
                       }
                   }
               } 
            }
        }
        cout<<count<<endl;
    }
}