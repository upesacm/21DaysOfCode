#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

int lcs(vector<int> &X1, vector<int> &X2)
{
    int m = X1.size();
    int n = X2.size();

    vector<vector<int> > M(m + 1 , vector<int>(n + 1 , 0));
    int i, j;

    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                M[i][j] = 0;

            else if (X1[i-1] == X2[j-1])
                M[i][j] = M[i-1][j-1] + 1;

            else
                M[i][j] = max(M[i-1][j], M[i][j-1]);
        }
    }

    return M[m][n];
}

int main()
{
    int m;
    cin >> m;

    vector<int> X(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> X[i];
    }
    
    int n;
    cin >> n;

    vector<int> Y(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> Y[i];
    }

    cout << lcs(X, Y) << endl;

    return 0;
}

