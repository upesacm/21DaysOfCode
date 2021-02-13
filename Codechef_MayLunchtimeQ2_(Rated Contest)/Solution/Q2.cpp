#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vect_i;
long solve(){
	int n; cin >> n;
	vect_i a(n), b(n);
	
	int sumA=0,sumB=0;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	long weird_dist = (a[0]==b[0])?a[0]:0;
	sumA=a[0]; sumB=b[0];
	for(int i=1; i<n; i++){
		if(a[i]==b[i]){
			if(sumA==sumB)
	            weird_dist+=(long)a[i];
		}
		sumA+=a[i]; sumB+=b[i];
	}
	
	return weird_dist;
	
}

int main()
{
	int t; cin >> t;
	while(t--)	{
	   cout << solve() << endl;
	}
	return 0;
}
