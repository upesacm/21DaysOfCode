#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;

int main()
{
	ll n,sum=0; cin >> n;
	vector<ll> arr(n);
	map<ll, ll> freq;
	
	ll mode,max_freq=0;
	for(ll i=0; i<n; i++)
	{
	 cin >> arr[i];
	 
	 if(freq.count(arr[i]))
	 freq[arr[i]]=1;
	 else
	 freq[arr[i]]++;
	 
	 if(freq[arr[i]]>max_freq){
      max_freq = freq[arr[i]];
      mode = arr[i];
	 }
	 else if(freq[arr[i]]==max_freq && mode>arr[i])
	  mode = arr[i];

	 sum+=arr[i];
	}
	float mean = (float)sum/n;
	mean = round(mean*10)/10;
	
	sort(arr.begin(), arr.end());
	float median;
	if(n%2)
	{
		median = arr[(n/2)];
	}
	else
		median = (float)(arr[(n/2)-1]+arr[n/2])/2;
	median = round(median*10)/10;
	
	
//	map<ll, ll>::iterator itr;
//	for(itr=freq.begin(); itr!=freq.end(); itr++)
//	{
////		cout << itr->first << " "<<itr->second << endl;
//		if(itr->second > max_freq){
//		mode = itr->first;
//		max_freq = itr->second;
//		}
//		if(itr->second == max_freq && itr->first<mode){
//			mode = itr->first;
////			cout << '*' << mode;
//		}
//	}
	
	printf("%.1f\n%.1f\n%d\n", mean, median, mode);
	
	return 0;
}
