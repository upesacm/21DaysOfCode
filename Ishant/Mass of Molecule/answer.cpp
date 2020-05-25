#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string n;
	cin>>n;

	stack<int> s;

	for(int i=0; i<n.size(); i++)
	{
		if(n[i] == '(')
			s.push(-1);
		if(n[i] == 'H')
			s.push(1);
		if(n[i] == 'C')
			s.push(12);
		if(n[i] == 'O')
			s.push(16);

		if(n[i]>='2' && n[i]<='9')
		{
			int x = s.top();
			s.pop();
			s.push(x * (n[i] - '0'));
		}

		if(n[i]==')')
		{
			int sum=0;
			while(s.top() != -1)
			{
				sum = sum+s.top();
				s.pop();
			}
			s.pop();
			s.push(sum);
		}
	}
	int mmass=0;
	while(!s.empty())
	{
		mmass = mmass + s.top();
		s.pop();
	}

	cout<<mmass<<endl;
	return 0;
}