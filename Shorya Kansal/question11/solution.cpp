#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	long int arr[n];
	int x[n];
	int y[n];
	
	stack<int> s;
	stack<int> s1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		x[i]=-1;
		y[i]=-1;
	}
	int t=0;
	for(int i=0;i<n;i++)
	{
		while(s.empty()==false && arr[i]>=arr[s.top()])
			s.pop();
		x[t++]=s.empty()?-1:s.top()+1;
		s.push(i);
	}
	for(int i=n-1;i>=0;i--)
	{
		while(s1.empty()==false && arr[i]>=arr[s1.top()])
			s1.pop();
		y[--t]=s1.empty()?-1:s1.top()+1;
		s1.push(i);
	}
	for(int i=0;i<n;i++)
		cout<<x[i]+y[i]<<" ";
}
 