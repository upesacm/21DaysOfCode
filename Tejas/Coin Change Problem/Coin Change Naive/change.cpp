// Denominations used: 1, 5, 10

#include <iostream>
using namespace std;

int get_change(int m) {
	
	int n=0;
	// v1-> 1 , v2-> 5 , v3-> 10
	if(m>1000)
		exit(0);
		
	int v3 = m/10;
	if(v3 >= 1)
		n += v3;
	m = m - (v3*10);
	
	int v2 = m/5;
	if(v2 >= 1)
		n += v2;
	m = m - (v2*5);
	
	n += m;
  return n;
  
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
