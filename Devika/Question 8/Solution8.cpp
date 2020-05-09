#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[n+1];
    int j=0,carry;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp[j]=arr[n-1]+1;
    carry=temp[j]/10;
    temp[j]=temp[j]%10;
    for(int i=n-2;i>=0;i--)
    {
        j++;
        if(carry==1)
        {
            
            temp[j]=arr[i]+1;
            carry=temp[j]/10;
            temp[j]=temp[j]%10;
        }
        else
        {
            temp[j]=arr[i];
        }
    }
    if(carry==1)
        temp[++j]=1;
        if(temp[n]==0)
        {
            for(int k=n-1;k>=0;k--)
            {
                cout<<temp[k]<<" ";
            }
        }
        else
        {
            for(int k=n;k>=0;k--)
            {
                cout<<temp[k]<<" ";
            }
        }
    return 0;
}

