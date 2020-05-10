#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int binary_search(vector<int> &a, int x)
{
  int left = 0;
  int right = (int)a.size() - 1;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (x == a[mid])
      return mid;
    if (a[mid] > x)
      right = mid - 1;
    else
      left = mid + 1;
  }
  //write your code here
  return -1;
}

int linear_search(const vector<int> &a, int x)
{
  for (size_t i = 0; i < a.size(); ++i)
  {
    if (a[i] == x)
      return i;
  }
  return -1;
}

int main()
{
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++)
    cin >> a[i];
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i)
    cin >> b[i];
  for (int i = 0; i < m; ++i)
  {
    //cout<<linear_search(a,b[i]) <<' ';
    cout << binary_search(a, b[i]) << ' ';
  }
}


