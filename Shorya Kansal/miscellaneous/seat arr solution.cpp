#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;									
	for(int i=0;i<n;i++)
	{
		int s,f;
		cin>>s;
		if((s%3==1)&&(s%2==1))
		{
			if(s%12==7)
			 f=s-1;
			else
			 f=s+11;
			cout<<f<<" WS\n";  
		}
		else if((s%3==1)&&(s%2==0))
		{
			if(s%12==4)
			 f=s+5;
			else 
			 f=s-7; 
			cout<<f<<" AS\n"; 
		}
		else if((s%3==0)&&(s%2==1))
		{
			if(s%12==3)
			 f=s+7;
			else
			 f=s-5;
			cout<<f<<" AS\n"; 
		}
		else if((s%3==0)&&(s%2==0))
		{
			if(s%12==6)
			 f=s+1;
			else
			 f=s-11;
			cout<<f<<" WS\n"; 
		}
		else if((s%3==2)&&(s%2==1))
		{
			if(s%12==5)
			 f=s+3;
			else
			 f=s-9;
			cout<<f<<" MS\n"; 
		}
		else
		{
			if(s%12==2)
			 f=s+9;
			else
			 f=s-3;
			cout<<f<<" MS\n"; 	
		}
	}
	return 0;
}	

