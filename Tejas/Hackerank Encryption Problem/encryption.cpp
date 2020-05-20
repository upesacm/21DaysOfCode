#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    int row = round(sqrt(n));
    int col;
    if (row >= sqrt(n)) 
        col=row; 
    else 
        col = row + 1;

    for(int j=0; j<col; ++j) {
        for(int i=j; i<n; i+=col)
            cout << str[i];
        cout << " ";
    }
    return 0;
}

