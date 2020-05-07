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
	
//	vector<int> count(2,0);
	
	while(t--)
	{
     long long n,minX,maxX,w,b;
     cin >> n >> minX >> maxX;
	
     neuron net[n];
     for(long long i=0;i<n;i++)
     {
	  cin >> w >> b;
	  net[i]._initialize(w,b);
     }	 
	
	 vector<bool> predict(2); bool x;
	 for(long long i = 1; i<= 2; i++)
	 {
		x = (i%2)==0;
//		cout << x << endl;
		for(int j = 0; j<n; j++)
		 x = net[j].activate(x);
	    
	    predict[i-1]=x;
	 }
//     cout << non_spammers << " " << spammers << endl;
	   
//     for(long long int i=minX; i<=maxX; i++)
//     {
//     	if(i%2==0)
//     	count[predict[1]]++;
//     	else
//     	count[predict[0]]++;
//	 }
//	 
	 long long int tot = maxX-minX+1;
	 long long int spammers=0, non_spammers=0,temp;

	 if(predict[0]==predict[1])
	 {
	 if(predict[0])
	 non_spammers=tot; 
	 else
	 spammers=tot;
	 }
	 else
	 {	
  		if(tot%2!=0)
	 	{
	 	if(maxX%2!=0 || minX%2!=0)
	 	spammers = tot/2 + 1;
	 	else
	 	spammers = tot/2;
	 	non_spammers = tot-spammers;
		}
	  	else
	  	{
	  	spammers = tot/2;
	  	non_spammers = tot-spammers;
	  	}
	  	
	  	if(predict[0])
	  	{
	  		temp = spammers;
	  		spammers = non_spammers;
	  		non_spammers = temp;
		  }
 	}
	  
    cout << non_spammers << " " << spammers << endl;
}
	return 0;
}
