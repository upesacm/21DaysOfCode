#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int merge_arrays(int a1[], int a2[], int a3[], int m, int n){
    int i, j;
    for(i=0; i<m; i++){
        a3[i] = a1[i];
    }
    for(i=m, j=0; i<m+n; i++, j++){
        a3[i]=a2[j];
    }
}
int main(){
    int n, m;
    cout<<"\nEnter the size of the first array: ";
    cin>>m;
    cout<<"\nEnter the size of the second array: ";
    cin>>n;
    int a1[m],a2[n];
    int a3[m+n];
    int i;
    cout<<"\nInput elements for the first array: ";
    for(i=0; i<m; i++){
        cin>>a1[i];
    }
    cout<<"\nInput the elements of the second array: ";
    for(i=0; i<n; i++){
        cin>>a2[i];
    }
    merge_arrays(a1, a2, a3, m, n);
    cout<<"\nThe merged sorted array: ";
    sort(a3, a3+(m+n));
    for(i=0; i<n+m; i++){
        cout<<a3[i]<<" ";
    }
    cout<<endl;
    return 0;
}