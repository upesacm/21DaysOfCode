#include<iostream>
using namespace std;

int main()
{
    int testCase;
	long long n;
    cin>>testCase;

    while(testCase--)
    {
    	int val = 0;
        cin>>n;
        while(n)
        {
            val += n%2;
            n /= 2;
        }
        cout<<val<<endl;
    }
    return 0;
}

