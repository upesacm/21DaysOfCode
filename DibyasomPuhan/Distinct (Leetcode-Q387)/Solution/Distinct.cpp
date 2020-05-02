#include<bits/stdc++.h>

using namespace std;

map<char, vector<int> > freq; 

typedef long long int ll;
 
int first_distinct_character(string str)
{
	int min=str.length(),len=min;
	for(int i=0 ; i<min; i++)
	    freq[str[i]].push_back(i);
	
	map<char, vector<int> >::iterator itr;
	for(itr=freq.begin(); itr!=freq.end(); itr++)
	if(itr->second.size()==1)
		{
			int ind = itr->second[0];
			min=(ind<min)?ind:min;		
		}
	min=(min==len)?-1:min;
	return min;
	
}

int main()
{
	string str; getline(cin, str);
	cout << first_distinct_character(str) << endl;
	return 0;
}
