#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int size;
    char temp;
    stack<char> S;
    string str;
    
    cin>>size;
    
    for(int i=0; i<size; i++)
    {
        cin>>temp;
        if(S.empty() != 1)
        {
            if(temp == S.top())
                S.pop();
            else
                S.push(temp);
        }
        else
            S.push(temp);
    }
    
    while(S.empty() != 1)
    {
        temp = S.top();
        str += temp;
        S.pop();
    }
    
    cout<< str.size() <<endl;
    
    for(auto itr=str.rbegin(); itr != str.rend(); itr++)
        cout<< *itr;
    
    return 0;
}

