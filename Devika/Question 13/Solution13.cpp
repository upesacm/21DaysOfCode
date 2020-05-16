#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
   int n, num;
   cin >> n;
   vector<int> vect;
   for (int i=0; i<n; i++)
   {
       cin >> num;
       vect.push_back(num);
   }
   int no, val;
   cin >> no;
   for (int i=0; i<no; i++)
   {
       cin >> val;
       vector<int>::iterator low = lower_bound(vect.begin(), vect.end(), val);
       if (vect[low - vect.begin()] == val)
           cout << "Yes " << (low - vect.begin()+1) << endl;
       else
           cout << "No " << (low - vect.begin()+1) << endl;
   }
    return 0;
}

