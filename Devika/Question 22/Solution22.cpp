#include <iostream>
using namespace std;

int main() 
{
    int n, j=0, zero=0, pos=0, neg=0;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    while (j<n)
    {
        if (ar[j]>0)
        {
            pos++;
        }
        if (ar[j]<0)
        {
            neg++;
        }
        else if (ar[j]==0) 
        {
            zero++;
        }
        j++;
    }
    cout << (float)pos/n << endl << (float)neg/n << endl << (float)zero/n;
    return 0;
}
