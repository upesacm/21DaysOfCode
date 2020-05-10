#include<iostream>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(arr[i]-arr[j]) > 1)
                    sum += arr[j]-arr[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
