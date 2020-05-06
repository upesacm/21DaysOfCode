#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) 
  	return -1;
  if (left + 1 == right) 
  	return a[left];
  int count = 0;
  sort(a.begin(), a.end());
  int mid = left + (right - left)/2;
  
  int majorityElement = a[mid];
  
  for(int i=0; i<a.size(); i++)
  {
  	if(a[i] == majorityElement)
  		count++;
  }
  if(count > a.size()/2)
  	return 1;

  return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}  

