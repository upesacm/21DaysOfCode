#include <iostream>

using namespace std;

int main()
{
    int n,i,k=1;
    //cin>>"Enter array size: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    int res[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<n;i++)
    {
        res[i]=arr1[i]+arr2[n-k++];
    }
    for(i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}

