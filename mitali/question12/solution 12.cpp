#include<bits/stdc++.h>

using namespace std;
int main()
{
    int l;
    char c;
    cin>>l;
    vector<char>s;
    for(int i=0;i<l;i++)
    {
    cin>>c;
    s.push_back(c);
    }
    for(int i=0;i<s.size()-1;i++)
     if(s[i]==s[i+1])
      {
       s.erase(s.begin()+i);
       s.erase(s.begin()+i);
       if(i==0)
       i=-1;
       else
       i=i-2;
       if(s.size()==0)
        break;
      }
     cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++)
    cout<<s[i];
}
