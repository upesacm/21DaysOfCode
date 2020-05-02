#include <iostream>
using namespace std;
const int array_size=10;
int main()
{
    int numbers[array_size]={23,45,19,71,84,78,56,38,67,46};
    int i,j,temp;
    cout<<"Originally array is:"<<endl;
    for(i=0;i<array_size;i++)
     cout<<numbers[i]<<",";
    cout<<"::::"<<endl;
    for(i=(array_size-1);i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(numbers[j-1]%10>numbers[j]%10)
            {
                temp=numbers[j-1];
                numbers[j-1]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
    cout<<"Array after sorting on the basis of One's digit is:"<<endl;
    for(i=0;i<array_size;i++)
     cout<<numbers[i]<<",";
    cout<<"::::"<<endl;
    return 0;
}
