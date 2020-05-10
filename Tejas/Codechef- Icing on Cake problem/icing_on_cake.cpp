#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n,k;
    cin >> n >>k;
    if(k==0){
        cout << 0 << endl;
        return 0;
    }
    vector<int> vect;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        vect.push_back(max(a,b));
    }
    priority_queue<int,vector<int>,greater<>> Q;
    int i = 0;
    while(i<k){
        Q.push(vect[i]);
        i++;
    }
    while(i < n){
        if(vect[i] > Q.top()){
            Q.pop();
            Q.push(vect[i]);
        }
        i++;
    }
    long sum =0;
    while(Q.empty()!=1){
        sum+=Q.top();
        Q.pop();
    }
    cout << 2*sum << endl;
    return 0;
}
