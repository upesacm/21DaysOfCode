#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i<n; i++) 
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int a=arr.size();
    for(int i=(a-1);i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}