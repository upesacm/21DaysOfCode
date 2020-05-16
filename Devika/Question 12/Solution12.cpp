#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void display(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
void insertsort(stack<int>&s,int k)
{
	if(s.empty()||k>s.top())
	{
		s.push(k);
		return;
	}
	int top=s.top();
	s.pop();
	insertsort(s,k);
	s.push(top);
}
void sort(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}
	int top=s.top();
	s.pop();
	sort(s);
	insertsort(s,top);
}
int main()
{
	stack<int>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		s.push(a);
	}
	
	sort(s);
	display(s);
	
}
