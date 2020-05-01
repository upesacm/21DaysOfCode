#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> optimal_sequence(long long n) 
{
  vector<long long> sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

int main() {
  int n;
  cin >> n;
  vector<long long> sequence = optimal_sequence(n);
  cout << sequence.size() - 1 << endl;
  for (long long i = 0; i < sequence.size(); ++i) {
    cout << sequence[i] << " ";
  }
}



