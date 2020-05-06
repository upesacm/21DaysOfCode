#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, q, i;
    string str1;
    string str2;

    unordered_multiset<string> stringSet;
    cin >> n;

    for (i = 0; i < n; ++i) {
        cin >> str1;
        stringSet.insert(str1);
    }

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> str2;
        cout << stringSet.count(str2) << '\n';
    }
return 0;
}

