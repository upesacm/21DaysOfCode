#include <bits/stdc++.h>

using namespace std;
	
void secondFreqChar(string s)
{
  int count[256] = {}; 
  for(int i=0; i<s.size(); i++)
  {
    count[s[i]]++;  
  }
  
  int first = 0, sec =0;
  for(int i=0; i < 256; i++)
  {
    
    if(count[i] > count[first]) 
    {
      sec = first;
      first = i;
    }
    
    else if(count[i] > count[sec] && count[i] != count[first])
    {
      sec = i;
    }
  }
  if (sec != '\0')
  {
    cout<<"second most frequent character is "<<char(sec)<<endl;  
  }
  else
  {
    cout<<"there is no second most frequent character"<<endl;
  }
  
}
int main()
{
  string s;
  cin>>s;
  secondFreqChar(s);
}

