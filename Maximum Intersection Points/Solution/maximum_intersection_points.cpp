#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

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

ll maximum_intersection_points(ll cir, ll s)
{
	ll stick_stick_intr   = 1*c(s,2);
	ll circle_stick_intr  = 2*cir*s;
	ll circle_circle_intr = 2*c(cir,2); 
	
	return circle_circle_intr + stick_stick_intr + circle_stick_intr;
}

int main()
{
	ll circles, sticks;
	cin >> circles >> sticks;
	cout << maximum_intersection_points(circles,sticks) << endl;
	
	return 0;
}
