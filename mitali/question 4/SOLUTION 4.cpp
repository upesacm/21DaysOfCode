#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{int count;
    if(a>b && a>c && a>d)
    {
        cout<<a;
        count=a;
    }
    else if(b>a && b>c && b>d)
    {
        cout<<b;
        count=b;
    }
    else if(c>a && c>b && c>d)
    {
        cout<<c;
        count=c;
    }
    else
    {
        cout<<d;
        count=d;
    }
   return count;
}


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);


    return 0;
}

