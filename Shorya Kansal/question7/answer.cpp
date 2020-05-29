#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	string str;
	cin>>str;
	stack<int>s;
	stack<int>t;
	while(cin>>n)
	{
		s.push(n);
	}
	while(!s.empty())
	{
	t.push(s.top());
	s.pop();
	}
	if(t.size()>2)
	cout<<"output:";
	else
	cout<<"output";
while(!t.empty())
{
cout<<" "<<t.top();
t.pop();
 
}
cout<<".";
}