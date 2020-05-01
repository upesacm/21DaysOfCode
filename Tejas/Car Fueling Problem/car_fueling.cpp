#include <iostream>
#include <vector>

using namespace std;

int compute_min_refills(int distance, int tank, vector<int> & stops) {
    // write your code here
    
    int refillCount = 0;
    int refillPosition = 0;
    int currentLocation = 0;
    int i = 0;
    
    stops.push_back(distance);
    while(1)
    {
    	if (tank + currentLocation >= distance)
        {
            return refillCount;
        }
        if (tank < stops[i] - currentLocation) 
        {
            refillPosition = i-1 ;
            if (currentLocation == stops[refillPosition])
            {
                return -1;
            }
            refillCount++;
            currentLocation = stops[i - 1];
            i -= 1;
            continue;
	}
    i++;
    }
    return -1;
}

int main() {
    int d=0, m=0, n=0;
    cin >> d >>m >>n;
    
    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
