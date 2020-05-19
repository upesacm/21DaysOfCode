#include <bits/stdc++.h>

typedef long long lli;
 
using namespace std;

void stringxor(string& a, string& b);
int compte1(string& a);

int main(void)
{
	int T{};
	scanf("%d", &T);
	while(T--)
	{
		
		int N{};
		scanf("%d", &N);
		vector<int> numberTeb(1, 0);
		map<int, int> last_index;
		last_index[0] = 0;
		int i{2};
		for (i; i <= N; ++i)
		{
			int x = numberTeb[i - 2];
			int ecart;
			if(last_index[x] == 0)
				ecart = 0;
			else
				ecart = i - 1 - last_index[x];
			numberTeb.push_back(ecart);
			last_index[x] = i - 1;
		}

		int result = count(numberTeb.begin(), numberTeb.end(), numberTeb.back());

		printf("%d\n", result);
		
	}

	return EXIT_SUCCESS;
}

int compte1(string& a)
{
	int arme{};
	for (int i{}; i < 10; ++i)
	{
		if(a[i] == '1')
			++arme;
	}
	return arme;
}



