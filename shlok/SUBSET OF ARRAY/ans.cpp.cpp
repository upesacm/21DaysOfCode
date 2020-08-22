
#include <iostream>
#include<math.h>
using namespace std;
void printsub(int input[],int size, int output[],int m)
{
    if(size==0)
    {
        for(int i=0;i<m;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int newout[m];
    int i;
    for(i=0;i<m;i++)
    {
        newout[i]=output[i];
    }
    newout[m]=input[0];
    printsub(input+1,size-1,newout,m+1);
    printsub(input+1,size-1,output,m);
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int s=pow(2,size)-1;
    int output[s];
    printsub(input,size,output,0);
}
int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
