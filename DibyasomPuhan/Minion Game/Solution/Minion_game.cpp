#include<bits/stdc++.h>

using namespace std;

/* TODO (#1#): Traverse through word.
               If letter is vowel, vowel_ctr+= len(word)-
               letter_index;
               else consonant+= len(word)-letter_index; */

typedef long long int ll;

int main()
{
 	string str; getline(cin, str);
	ll vowel_ctr=0, consonant_ctr=0, len = str.length();
	string vowels = "aeiouAEIOU";
	
	for(int i=0;i<len;i++)
	{
	     char ch = str[i];
	     if(vowels.find(ch)+1)
	     vowel_ctr+=(len-i);
	     else
	     consonant_ctr+=(len-i);
	     
	}	
	
	if(vowel_ctr > consonant_ctr)
	cout << "Kevin " << vowel_ctr << endl;
	else if(consonant_ctr>vowel_ctr)
	cout << "Stuart " << consonant_ctr << endl;
	else
	cout << "Draw" << endl;
	
	return 0;
}
