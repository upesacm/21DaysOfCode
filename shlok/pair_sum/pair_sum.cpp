#include<iostream>
using namespace std;
int duplicate(int A[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			int sum=7;
			if(sum==A[i]+A[j])
			{
				cout<<A[i]<<" "<<A[j];
			}
			
		}
cout<<endl;				
			}
}
    int main()
    {
    	int size;
    	int A[size];
    
    	cin>>size;
    	for(int i=0;i<size;i++)
    	{
    		cin>>A[i];
    		
		}
		duplicate(A,size);
		return 0;
	}
#include<iostream>
using namespace std;
int duplicate(int A[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			int sum=7;
			if(sum==A[i]+A[j])
			{
				cout<<A[i]<<" "<<A[j];
			}
			
		}
cout<<endl;				
			}
}
    int main()
    {
    	int size;
    	int A[size];
    
    	cin>>size;
    	for(int i=0;i<size;i++)
    	{
    		cin>>A[i];
    		
		}
		duplicate(A,size);
		return 0;
	}

