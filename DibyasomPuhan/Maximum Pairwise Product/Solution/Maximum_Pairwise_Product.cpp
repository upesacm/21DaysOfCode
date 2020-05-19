#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vect_i;

long max_pairwise_product(const vect_i &arr)
{
	int max=0,almost_max=0;
	
 	 for(int i=0; i<arr.size(); i++)
	  {
	   		 if(arr[i]>=max)
				{
					almost_max = max;
					max = arr[i];
                }
			  else if(arr[i] > almost_max)
			  almost_max = arr[i];	
	  }
	 return max*almost_max;
	 	
}

int main()
{
	vect_i arr;
	int n,temp; cin >> n;
	
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	
	cout << max_pairwise_product(arr) << endl;
	
	return 0;
}
