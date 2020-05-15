#include<bits/stdc++.h>
using namespace std;
int main()
{
string a="maggagzards";
cout<<a<<endl;
cout<<a.size()<<endl;
a.push_back('e');
cout<<a<<endl;
a.pop_back();

cout<<a<<endl;
string::iterator itr;
for(itr=a.begin();itr!=a.end();itr++)
{
    cout<<*itr<<endl;
}
for(auto it=a.rbegin();it!=a.rend();it++)
{
    cout<<*it<<endl;
}
return 0;
}