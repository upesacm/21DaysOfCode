#include<iostream>
#include<string>

using namespace std;

string spinWords(const string &str)
{
  string s;
  string word="";
  for(auto x : str)
  {
    if(x==' ')
    {
      if(word.size()>=5)
        reverse(word.begin(), word.end());
      s.append(word);
      s += ' ';
      word = "";
    }
    else
      word = word + x;
  }
  if(word.size()>=5)
    reverse(word.begin(), word.end());
  s.append(word);
  return s;
}

int main()
{
  string str;
  cout<<"Enter any sentence: ";
  getline(cin, str);

  cout<<spinWords(str)<<endl;
  return 0;
}