#include <bits/stdc++.h>

using namespace std;

bool solve(){
	 int temp,p, sum=0;
	 for(int i=0; i<5; i++){
	 	cin >> temp;
	 	sum+=temp;
	 }
     cin >> p;
     return sum*p>120;
}

int main()
{
	int t; cin >> t;
	while(t--)	{
		if(solve())
		cout << "Yes\n";
		else
		cout << "No\n";
	}
	return 0;
}
