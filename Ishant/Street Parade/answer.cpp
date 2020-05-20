#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int v;
        queue<int> Q;
        stack<int> S;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            Q.push(v);
        }

        int c=1;
        while(!Q.empty()||!S.empty())
        {
            if(!Q.empty()&&Q.front()==c)
            {
                Q.pop();
                c++;
            }
            else
            {
                if(!S.empty()&&S.top()==c)
                {
                    S.pop();
                    c++;
                }
                else
                {
                    if(!Q.empty())
                    {
                        int s=Q.front();
                        S.push(s);
                        Q.pop();
                    }
                    else
                    	break;
                }
            }
        }
        if(c==n+1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        cin>>n;
    }
    return 0;
}