#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
const int MOD = 1000000007; 

vector<int> simpleSieve(long r){
    vector<int> result;
    if(r < 2)
        return result;

    vector<int> sieve(r+1, 1);
    result.push_back(2);
    for(int i=3; i <= r; i+=2){
        if(sieve[i]){
            for(int j=i*i; j <= r; j+=i)
                sieve[j] = 0;
            result.push_back(i);
        }
    }
    return result;
}

vector<long long> segmentSieve(long l, long r){
    vector<long long> result;
    vector<int> segment(r-l+1, 0);

    long limit = (long int)sqrt(r);
    vector<int> array = simpleSieve(limit);

    for(int i=0; i < array.size(); ++i){
        long base = (l/array[i])*array[i];
        
        if(base < l)
            base += array[i];
        base-=l;

        for(; base < r-l+1; base+=array[i]){
            if(array[i] != base+l)
                segment[base] = 1;
        }
    }

    for(int i=0; i < r-l+1; ++i){
        if(!segment[i])
            result.push_back(i+l);
    }

    return result;
}

long long product(vector<long long> ar) 
{ 
    long result = 1; 
    for (int i = 0; i < ar.size(); i++) 
        result = (result * ar[i]) % MOD; 
    return result; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long l,r;
        cin >> l >> r;

        vector<long long> p = segmentSieve(l, r);

        long long result = product(p);
        cout << result << endl;
    }
    return 0;
}