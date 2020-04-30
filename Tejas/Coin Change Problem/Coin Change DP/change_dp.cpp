// Denominations used: 1, 3, 4

#include <iostream>
using namespace std;

int change(int m)
{
	
  int coins[] = {1, 3, 4};
  int min_coins[m + 1];
  min_coins[0] = 0;
  int numCoins = 0;
  
  for (int i = 1; i <= m; i++)
  {
    min_coins[i] = 100000;
    for (int j = 0; j < 3; j++)
    {
      if (i >= coins[j])
      {
        numCoins = min_coins[i - coins[j]] + 1;
        if (numCoins < min_coins[i])
        	min_coins[i] = numCoins;
      }
    }
  }
  
  return min_coins[m];
}

int main()
{
  int n;
  cout<<"Enter Amount: ";
  cin >> n;
  cout <<"Number of coins used: "<< change(n) << '\n';
}

