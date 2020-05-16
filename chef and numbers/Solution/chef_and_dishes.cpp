#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vect;
typedef map<int, int> mat;

int bestdish()
{
 	int n,curr,prev=0; cin >> n;
 	vect dishes(n); 
 	mat m; mat c;
 	for(int i=0;i<n; i++)
 	{
 		cin >> curr;
		dishes[i]=curr;
		if(m.count(curr))
		m[curr]++;
		else
		m[curr]=1;
    }
    
    mat::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
	c[itr->first]=0;
    
    for(int i=0; i<n; i++)
    {
    	curr = dishes[i];
    	if(prev==curr)
    	c[curr]++;
    	
    	prev=curr;
	}
	
	int max=0; vect soln(100); int ctr=0;
	for(itr=c.begin(); itr!=c.end(); itr++)
	{
		itr->second = m[itr->first] - (itr->second+1)/2;
		if(itr->second > max)
		max = itr->second;
//		cout << itr->first << " " << itr->second << endl;
	}
	int k=0;
 	for(itr=c.begin(); itr!=c.end(); itr++)
 	{
 	 	if(itr->second == max)
 	 	{
		  soln[k] = itr->first; k++;
        }
    }
    int min = 1001;
    if(k==1)
    return soln[0];
    else
    for(int i=0; i<=k; i++)
  		if(min > soln[i] && soln[i]!=0)
		  min = soln[i];  
    
    return min;

}

int main()
{
 	int t; cin >> t;
 	vect solutions(t); int i=0;
 	while(t--)
 	{
 	  solutions[i] = bestdish();
  	  i++;	
    }
    
    for(int j=0; j<i; j++)
    cout << solutions[j] << endl;
 	
	 return 0;	
}

