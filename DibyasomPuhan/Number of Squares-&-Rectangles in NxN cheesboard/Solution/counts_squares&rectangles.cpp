#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

ll factorial(ll n)
{		
	return n = (n==1 || n==0)?1	: n*factorial(n-1);
}

ll partial_factorial(ll n, ll r)
{
	if(r==1)
	return n;
	else
	return n*partial_factorial(n-1, r-1);
}

ll c(ll n, ll r)
{
	r = (r>(n/2))?(n-r):r;
	return partial_factorial(n,r)/factorial(r);
}

ll possible_squares(ll n)
{
	return n*(n+1)*(2*n+1)/6;
}

ll possible_rectangles(ll n)
{
	return pow(c(n+1,2),2);
}


int main()
{
	ll n; cin >> n;
	cout << possible_rectangles(n) << " " << possible_squares(n) << endl;
	
	return 0;
}
