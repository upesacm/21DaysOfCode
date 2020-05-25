using namespace std;

bool valid_braces(std::string braces) 
{
  stack<char> s;
  for(int i=0; i<braces.size(); i++)
  {
      if(braces[i]=='(' || braces[i]=='[' || braces[i]=='{')
      {
        s.push(braces[i]);
        continue;
      }
      
      if(s.empty())
        return false;
      
      else if(braces[i] == ')')
      {
          if(s.top()=='{' || s.top()=='[')
            return false;
          s.pop();
      }
       else if(braces[i] == '}')
      {
          if(s.top()=='(' || s.top()=='[')
            return false;
          s.pop();
      }
       else if(braces[i] == ']')
      {
          if(s.top()=='(' || s.top()=='{')
            return false;
          s.pop();
      }
  }
  return true;
}