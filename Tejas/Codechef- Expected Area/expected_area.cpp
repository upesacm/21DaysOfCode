#include<bits/stdc++.h>

using namespace std;
int main()
{
        long long int n;
        cin>>n;
        double iarr1[n],iarr2[n];
        double arr1[n],arr2[n];
        
        for(long long int i=0;i<n;i++)
                cin>>iarr1[i]>>iarr2[i];
                
        for(long long int i=0;i<n-1;i++)
        {
            arr1[i] = (iarr1[i] + iarr1[i+1])/2.0;
            arr2[i] = (iarr2[i] + iarr2[i+1])/2.0;
        }
        
        arr1[n-1] = (iarr1[0] + iarr1[n-1])/2.0;
        arr2[n-1] = (iarr2[0] + iarr2[n-1])/2.0;
        
        double z = 0;
        
        for(long long int i=0;i<n-1;i++)
        {
            z = z + arr1[i]*arr2[i+1] - arr1[i+1]*arr2[i];
        }
        
        z = z + arr1[n-1]*arr2[0] - arr1[0]*arr2[n-1];
        z /= 2.0;
        
        cout<<fixed<<setprecision(10)<<abs(z)<<endl;
    return 0;
}
