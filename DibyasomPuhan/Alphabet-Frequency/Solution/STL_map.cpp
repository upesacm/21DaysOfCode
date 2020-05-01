#include<bits/stdc++.h>

using namespace std;

typedef map<char, long> map_ci;

int main()
{
	string str; getline(cin, str);
	map_ci freq_table;
	
	for(int i=0;i<str.length();i++)
	{
		char ch = str[i];
		if(freq_table.count(i))
		freq_table[ch]=1;
		else
		freq_table[ch]++;
	}
	
	cout << "Character\tFrequency\n\n"; 
	map_ci::iterator itr;
	for(itr=freq_table.begin(); itr!=freq_table.end();  itr++)
	{
		if(itr->first==' ')cout << "spaces";
		cout << itr->first << "\t  |\t " << itr->second << endl;
	}
	return 0;
}
