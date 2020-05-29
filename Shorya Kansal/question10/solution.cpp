#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
void next_greater(int a [],int n,int F[]){
    stack<int> s;
    int i;
    for(i = n-1;i>=0;i--){
 
        while(s.empty() == false && a[s.top()] <= a[i])
             s.pop();
        
        if(s.empty() == false)
            F[i] = s.top();
 
        else
            F[i] = -1;
        
        s.push(i);
    }
}
 
void next_smaller(int a[],int n,int G[]){
    stack<int> s;
    int i;
    for(i = n-1;i>=0;i--){
 
        while(s.empty()==false && a[s.top()]>=a[i])
            s.pop();
        
        if(s.empty() == false)
            G[i] = s.top();
        else
            G[i] = -1;
        
        s.push(i);
    }
}
 
int main(){
    int size;
    cin >> size;
    int a[size];
    for(int i=0;i<size;i++)
       cin >> a[i];
    
    int G[size];
    int F[size];
 
    next_greater(a,size,F);
    next_smaller(a,size,G);
 
    for(int i = 0; i <size;i++){
        if(F[i]!=-1 && G[F[i]]!=-1)
           cout<<a[G[F[i]]]<<" ";
        else
           cout<<"-1"<<" ";
    }
}