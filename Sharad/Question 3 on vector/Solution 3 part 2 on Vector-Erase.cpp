#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int> v1{ 10, 20, 30, 40, 50};

   
    cout << "v1: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    
    v1.erase(v1.begin() + 2); 

    
    cout << "After removing one element" << endl;
    cout << "v1: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;


    v1.erase(v1.begin() + 1, v1.begin() + 3); 

    
    cout << "After removing a range of elements" << endl;
    cout << "v1: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    return 0;
}