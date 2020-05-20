#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
        
    int anagram = 0;
    int diff = 1;
    for(int i=0; i<s.size()-1; i++){
        vector<string> substrings(0);
        for(int j=0; j<s.size()-diff+1; j++)
        {
            substrings.push_back(s.substr(j,diff));
        }

        for(int j=0; j<substrings.size(); j++)
        {
            sort(substrings[j].begin(),substrings[j].end());
        }

        for(int x=0; x<substrings.size(); x++)
        {
            for(int y=x+1; y<substrings.size(); y++)
            {
                if(substrings[x]==substrings[y])
                    anagram++;
        }
        }
        diff++;
    }
    return anagram;
}

int main()
{
   int testCase;
   cin>>testCase;
   while(testCase--)
   {
       string str;
       cin>>str;
       
       cout<<sherlockAndAnagrams(str)<<endl;

   }

}

