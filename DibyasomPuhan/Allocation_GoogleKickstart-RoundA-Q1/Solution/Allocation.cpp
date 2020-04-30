#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vect;

int n,budget,q=0;
vect solution;

void caniafford()
{
//  Creating and assigning values to vector, from std.input
	vect houses(n,0);    
	for(int i=0;i<n;i++)
		cin >> houses[i];
	
//	Since the problem says, 'maximum number of houses' I will iterate from the cheapest house, therefore sorting in ascending order.
	sort(houses.begin(), houses.end());
	
//	Iterating till the budget permits
	int ptr=0;
	while(budget>=houses[ptr] && ptr<n)
	{
 	     budget-=houses[ptr];
 	     ptr++;
	}
	
	solution[q]=ptr;
	 
}

int main()
{
    int query; cin >> query;
    solution.resize(query);
    
	for(; q<query; q++)
	{
	cin >> n >> budget;
	caniafford();
	}
	
	for(int q=0; q<query; q++)
	printf("Case #%d: %d\n", (q+1), solution[q]);
	
	return 0;
}
