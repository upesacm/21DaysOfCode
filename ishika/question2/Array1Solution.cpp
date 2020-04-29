/*Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.

*/

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int pos = 0;
    int neg = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;
    for(int i=0;i<20;i++)
    {
        cout << "Enter a number\n";
        cin >> a[i];

        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            zero++;
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    cout << "Positive " << pos << "\nNegative " << neg <<"\nZero "<<zero<<"\nOdd "<<odd<<"\nEven "<<even<<"\n";
    return 0;
}
