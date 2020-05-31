#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        map<int, multiset<long long>> mp;
        map<int, multiset<long long>>::iterator itr;
        
        for (int i=0; i < n; ++i){
            int x, y;
            cin >> x >> y;
            mp[x].insert(y);
        }
        multiset<long long> first;
        long long int total = 0;
        long long int temp = 0;
        long long int count = 0;
        for (itr= mp.begin(); itr != mp.end(); ++itr){
            multiset<long long>::iterator it = itr->second.begin();
            first.insert(*it);
            ++it;
            for (; it != itr->second.end(); ++it){
                temp += *it;
            }
        }
        for (auto x: first)
            total += (++count*x);
        total += (count*temp);
        cout << total << endl;
    }
}