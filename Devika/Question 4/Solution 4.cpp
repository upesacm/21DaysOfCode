#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
	int j = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

    for (int i=0; i < n; i++)
	{
        for(int j=0;j<i;j++)
		{
            if(arr[i]==arr[j])
			{
                n--;
                for (int k=i; k<n; k++)
				{
                    arr[k]=arr[k+1];
                }
                i--; 
            }
        }
    }
    cout<<"Lenght: "<<n<<endl<<"Output Array:"<<endl;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
