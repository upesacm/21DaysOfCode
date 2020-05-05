#include<bits/stdc++.h>

using namespace std;

string s;

string l(string str)
{
	return str.substr(1,str.length()-1)+str.substr(0,1);
}

string r(string str)
{
	return str.substr(str.length()-1,1)+str.substr(0,str.length()-1);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
	while(cin)
	{
	getline(cin, s);
	if(s.length())break;
	}
	if(!(r(s).compare(l(s))))
	cout << "YES" << endl;
	else
	cout << "NO" << endl;
	}
	
	return 0;
}
