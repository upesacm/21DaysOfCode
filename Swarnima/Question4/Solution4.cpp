#include <iostream>
using namespace std;
int m=0, n=0;
void compareTriplets(int x, int y){
    if(x>y){
        m++;
    }
    else if(x<y){
        n++;
    }
}
int main(){
    int a[3], b[3], c[2], i;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    compareTriplets(a[0], b[0]);
    compareTriplets(a[1], b[1]);
    compareTriplets(a[2], b[2]);
    c[0]=m;
    c[1]=n;
    while(i<2){
        cout<<c[i]<<" ";
        i++;
    }
}