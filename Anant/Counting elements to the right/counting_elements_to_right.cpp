#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements of the array=";
    cin>>n;
    int a[n],count=0;
    cout<<"Enter elements of the array";
    for(int x=0;x<n;x++)
    cin>>a[x];
    
    for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(a[i]<a[j])
             count++;
         }
         cout<<count<<" ";
         count=0;
     }
    
}
