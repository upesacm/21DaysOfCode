
#include<iostream>
using namespace std;
int main()
{
    int a,n,h=-1,res=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            h=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==h)
        {
            res++;
        }
    }
    cout<<res<<endl;
}
