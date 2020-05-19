#include <bits/stdc++.h>

#define watch(x) cout << (#x) << " = " << (x) << endl

using namespace std;

long long compute(long long n) {
  switch (n % 4) {
    case 0:
      return n;
    case 1:
      return 1;
    case 2:
      return n + 1;
    case 3:
      return 0;
  }
}

void solve() {
  long long l, r, result;
  cin >> l >> r;

  if ((compute(l - 1) ^ compute(r)) % 2 == 0)
    cout << "Even\n";
  else
    cout << "Odd\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) solve();

  return 0;
}

