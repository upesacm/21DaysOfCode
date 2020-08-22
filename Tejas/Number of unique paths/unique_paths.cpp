#include <iostream>
using namespace std;

int no_of_paths(int n,int m)
{
    int matrix[n][m];
    for(int i=0;i<n;i++)
        matrix[i][0]=1;
        
    for(int i=0;i<m;i++)
        matrix[0][i]=1;
        
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++)
            matrix[i][j] = matrix[i][j-1] + matrix[i-1][j];
    }
    
    return matrix[n-1][m-1];
}
int main() {
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<no_of_paths(n,m)<<endl;
	}
	return 0;
}
