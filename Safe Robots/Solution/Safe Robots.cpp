#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t-- >0)
	{
	   string s;
	   cin>>s;
	   long sa,sb;
	   cin>>sa>>sb;
	   long long a=find (s.begin(), s.end(), 'A')-s.begin();
	   long long b=find (s.begin(), s.end(),'B')-s.begin();
	   while(a<b)
	   {
	   	 a+=sa;
	   	 b-=sb;
		 if(a==b)
		 break;
	   }
	   if(a==b)
	   cout<<"unsafe\n";
	   else
	   cout<<"safe\n";
    }
}
