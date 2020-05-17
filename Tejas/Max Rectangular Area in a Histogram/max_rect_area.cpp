#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int testCase;
	cin >> testCase;
	while(testCase--)
	{
	    long long int n;
	    cin >> n;
	    vector<long long int> vect(n);
	    for(long long int i=0; i<n; i++)
	    {
	        cin >> vect[i];
	    }
	    stack<long long int> S;
	    
	    long long int left,right,temp;
	    long long int area=0;
	    long long int maxarea=0;
	    for(long long int i=0; i<n; i++)
	    {
	      
	        if(S.empty() || vect[i] >= vect[S.top()])
	        {
	            S.push(i);
	        }
	        else
	        {
	            while(S.empty()!=1 && vect[S.top()] > vect[i])
	            {
	                temp= vect[S.top()];
	                S.pop();
	                
	                if(S.empty())
	                    left =-1;
	                else
	                    left = S.top();
	                    
	                right = i;
	                area = temp * (right - left -1);
	                maxarea = max(maxarea,area);
	                
	            }
	            S.push(i);
	        }
	   
	    }
	    right = n;
	    while(!S.empty())
        {
            temp= vect[S.top()];
            S.pop();
            if(S.empty())
            {
                left =-1;
            }
            else
            {
                left = S.top();
            }
            area = temp * (right - left -1);
            maxarea = max(maxarea,area);
        }
        cout << maxarea << endl; 
	}
	return 0;
}
