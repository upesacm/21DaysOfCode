#include<bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    if(n<1918)
        {
        if(n%4==0)
            cout<<"12.09."<<n;
        else
            cout<<"13.09."<<n;
    }
    else if(n==1918)
        {
        cout<<"26.09.1918";
    }
    else
        {
        if(n%400==0 || (n%4==0 && n%100!=0))
            cout<<"12.09."<<n;
        else
            cout<<"13.09."<<n;
    }
    return 0;
}
