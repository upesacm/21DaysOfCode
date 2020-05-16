#include<bits/stdc++.h>

using namespace std;

int solve(){
	int l,k;
	cin >> l >>k;

	int ans = 0;

	for(int i =0;i <= l- k; i ++){
		ans += (i + 1);
	}

	return ans;
}

int main(int argc, char const *argv[]) {
	int t;
	cin >> t;

	int j =0;

	for(int j =0;j < t ;j ++){
		int res = solve();

		cout << "Case " << (j + 1) << ": " << res << "\n";
	}
	return 0;
}
