#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<string, int> m;
    while(n--)
    {
        int x;
        cin>>x;
        string name;
        int marks;
        if(x==1)
        {
            cin>>name>>marks;
            if(m.find(name) == m.end())
                m.insert(make_pair(name,marks));
            else
                m[name] = m[name] + marks;
        }
        else if(x==2)
        {
            cin>>name;
            m.erase(name);
        }
        else if(x==3)
        {
            cin>>name;
            cout<<m[name]<<endl;
        }
    }  
    return 0;
}



