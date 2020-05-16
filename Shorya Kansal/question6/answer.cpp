#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	priority_queue<int> q;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int x=n;
	for(int i=0;i<n;i++){
		q.push(A[i]);
		while(!q.empty()&&q.top()==x){
			cout<<q.top()<<" ";
			q.pop();
			x--;
		}
		cout<<endl;
	}
	return 0;
}