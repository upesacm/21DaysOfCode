#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    
    while(x--)
    {
        int n, m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>arr[i][j];
        }
        int a=0, b=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if((i+j)%2 == 0)
                {
                    if(arr[i][j] == 'G')
                        a += 3;
                    else
                        b += 5;
                }
                else
                {
                    if(arr[i][j] == 'R')
                        a += 5;
                    else
                        b += 3;
                }
            }
        }
        if(a<b)
            cout<<a<<endl;
        else
            cout<<b<<endl;
    }
    return 0;
}
