#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"ENter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:-";
    int a[n],count=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    int max=0,index=0;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(a[i]==a[j])
          { count++ ;}
        }
            cout<<"\n" <<count;
            if(count>max)
           { max=count;
             index=i;}
             count=0;
    }
    cout<<endl<<max;
    if(max>n/2)
    cout<<"Majority element found at "<<index<<"index";
    else
    cout<<"No Majority element found";
    return 0;
}

