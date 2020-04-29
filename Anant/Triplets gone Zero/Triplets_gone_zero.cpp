#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,x,count=0;
    int test,t;
    cout<<"Enter number of test cases=";
    cin>>test;
    for(t=1;t<=test;t++)
    {
    cout<<"Enter the number of elements in the " << t <<" array";
    cin>>n;
    int a[n];
    for(x=0;x<n;x++)
    {
        cin>>a[x];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          for(k=j+1;k<n;k++)
          {
              if((a[i]+a[j]+a[k])==0)
              {
			  cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
              count++;
			  }
		  }
            
        }
        
    }
    if(count>0)
    {
        cout<<count;
        cout<<" triplets are zero"<<endl;
    }
    else 
    cout<<"No triplet found"<<endl;
    }
}
