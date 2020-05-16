#include <bits/stdc++.h>

#include<iostream>

using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
 {
     long long int n,a[1000000000],total=0,k;
     cin>>n>>k;
     for(int i=0;i<n;i++)
     {
      cin>>a[i]; 
      total=total+a[i]; 
     }
     cout<<total%k<<endl;
 } 
	return 0;
}

