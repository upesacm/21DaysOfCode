#include<bits/stdc++.h> 
using namespace std; 
  
typedef long long int ll; 
  
ll fib(ll f[], ll n) 
{ 
    f[0] = 0; 
    f[1] = 1; 
  
    for (ll i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  
// Returns last digit of n'th Fibonacci Number 
int findLastDigit(int n) 
{ 
    ll f[60] = {0}; 
  
    // Precomputing units digit of   
    // first 60 Fibonacci numbers 
    fib(f, 60); 
  
    return f[n % 60]; 
} 

int main()
{
	ll n;
	cin>>n;
	cout<<findLastDigit(n);
	return 0;
}
