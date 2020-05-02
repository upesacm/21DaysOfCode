#include <iostream>
#include <vector>
using namespace std;

vector<int> vect;
int sum_get(int start, int sum)
{
  if (sum == 0)
  {
    return 1;
  }
  vect.push_back(start);
  if (start > sum)
  {
    return -1;
  }
  int value = sum_get(start + 1, sum - start);
  if (value == -1)
  {
    vect.pop_back();
    vect.pop_back();
    return sum_get(start + 1, sum);
  }
  if (value == 1)
  {
    return 1;
  }
  return sum_get(start + 1, sum - start);
}


vector<int> optimal_summands(int n) {
  vector<int> summands;
  int sum = sum_get(1, n);
  if (sum == -1)
    return summands;
  else
    summands = vect;
    
  return summands;
}

int main() {
  int n;
  cin >> n;
  vector<int> summands = optimal_summands(n);
  cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    cout << summands[i] << ' ';
  }
}


