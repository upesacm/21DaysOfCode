#include<iostream>
using namespace std;
int main()
{
    int n;//size of array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;//to rotate by
    for(int i=0;i<t;i++)
    {
        int temp=arr[0],j;
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
