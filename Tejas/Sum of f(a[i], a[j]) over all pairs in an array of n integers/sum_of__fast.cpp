#include <bits/stdc++.h>
using namespace std;

int sumof(int a[], int n)
{
    map<int, int> M;

    int val = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        val += (i * a[i]) - sum;
        sum += a[i];

        if (M[a[i] - 1])
            val -= M[a[i] - 1];

        if (M[a[i] + 1])
            val += M[a[i] + 1];
        M[a[i]]++;
    }
    return val;
}

int main()
{
    int testCase,n;
    cin>>testCase;
    //int arr[n];
    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        cout<< sumof(arr,n);
    }
    return 0;
}
