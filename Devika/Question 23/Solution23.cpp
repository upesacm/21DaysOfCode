#include<iostream>
using namespace std;


int main() 
{
    int n,sp,w = 1,k;
    cin >> n;
    k = n-1;
    for(int i = 0; i < n; i++)
    {
        sp = k;
        for(int j = 0; j < sp; j++)
        {
            cout << " ";
        }
        for(int m = 0; m < w; m++)
        {
            cout << "#";
        }
        cout << endl;
        k--;
        w++;
    }
    return 0;
}
