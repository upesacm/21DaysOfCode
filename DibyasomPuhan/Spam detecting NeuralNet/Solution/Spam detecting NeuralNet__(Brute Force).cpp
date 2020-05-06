#include<bits/stdc++.h>

using namespace std;

//typedef unsigned long long int ll;

class neuron
{
 public:
 	
	bool weight, bias;
	neuron()
	{
		weight=1;
		bias=0;
	}
	
	_initialize(long long w, long long b)
	{
		weight = (w%2==0)?true:false;
		bias = (b%2==0)?true:false;
//		cout << weight << " " << bias << endl; 
	}
	
	long long activate( bool x)
	{
		bool prod = weight | x;
		bool add = (prod == bias)?true:false;
//		cout << prod << " " << add << endl;
		return add;
	}
};


int main()
{
	int t; cin >> t;
	while(t--)
	{
     long long n,minX,maxX,w,b,spammers=0,non_spammers=0;
     cin >> n >> minX >> maxX;
	
     neuron net[n];
     for(long long i=0;i<n;i++)
     {
	  cin >> w >> b;
	  net[i]._initialize(w,b);
     }	 
	
	 bool x;
	 for(long long i = minX; i<= maxX; i++)
	 {
		x = (i%2)==0;
//		cout << x << endl;
		for(int j = 0; j<n; j++)
		 x = net[j].activate(x);
	    
	    if(x) non_spammers++;
	    else
	    spammers++;
	 }
     cout << non_spammers << " " << spammers << endl;
	}
	return 0;
}
