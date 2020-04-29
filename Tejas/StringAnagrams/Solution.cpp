#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool Anagrams( string S1, string S2 )
{
	int size1 = S1.length();
	int size2 = S2.length();
	
	sort( S1.begin(), S1.end());
	sort( S2.begin(), S2.end());
	
	if(size1 != size2)
		return false;
		
	for(int i=0; i<size1; i++)
	{
		if(S1[i] == S2[i])
			return true;
	}
	
	return false;
}

int main()
{
	string str1 = "abcd";
	string str2 = "cdba";
	string str3 = "lkjh";
	
	if(Anagrams(str1,str2))
		cout<<"The strings "<<str1<<" and "<<str2<<" are anagrams of each other";
	else
		cout<<"The strings "<<str1<<" and "<<str2<<" are not anagrmas of each other";
		
	cout<<endl<<endl;
		
	if(Anagrams(str1,str3))
		cout<<"The strings "<<str1<<" and "<<str3<<" are anagrmas of each other";
	else
		cout<<"The strings "<<str1<<" and "<<str3<<" are not anagrmas of each other";
}
