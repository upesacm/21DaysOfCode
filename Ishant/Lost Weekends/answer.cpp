#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n--)
	{
	    int arr[5];
	    int P;
	    for(int i=0; i<5; i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>P;
	    int sum = arr[0] + arr[1] + arr[2] +arr[3] +arr[4];
	    sum = sum*P;
	    if(sum <=120)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
	return 0;
}