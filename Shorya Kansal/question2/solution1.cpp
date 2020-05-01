//Matrix multipliation
#include<iostream>
#include<process.h>
using namespace std;
int main()
{
 int a[10][10], b[10][10], c[10][10];
 int i,j,m,n,p,q;
 cout<<"\nInput row and column of matrix-A \n";
 cin>>m>>n;
 cout<<"\nInput row and column of matrix-B \n";
 cin>>p>>q;
 if(n==p)
  cout<<"Matrices can be multiplied";
 else 
 {
   cout<<"Matrices cannnot be multiplied\n";
   exit(0);
 }
 cout<<"\nInput matrix-A: \n";
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
   cin>>A[i][j];
 }
 cout<<"\nInput matrix-B: \n";
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
   cin>>B[i][j];
 }
 for(i=0;i<m;++i)
 for(j=0;j<q;++j)
 {
   C[i][j]=0;
   for(ip=0;ip<n;++ip)
     C[i][j]+=(A[i][ip]*B[ip][j]);
 }
 cout<<"\nProduct of A&B matrices :";
 for(i=0;i<m;++i)
 {
   cout<<"\n";
   for(j=0;j<q;++j)
    cout<<C[i][j]<<" ";
 }
 return 0;
}
