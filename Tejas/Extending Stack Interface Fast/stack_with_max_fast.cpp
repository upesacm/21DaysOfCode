#include <bits/stdc++.h> 
using namespace std; 
    
struct StackWithMax{
	stack<int> S;
	int maxEle;
	
	public:
  
    void pop() 
    { 
        if (S.empty()) { 
            cout << "Stack is empty\n"; 
            return; 
        } 
        
        int t = S.top(); 
        S.pop(); 
  
        if (t > maxEle) { 
            //cout << maxEle << "\n"; 
            maxEle = 2 * maxEle - t; 
        } 
  
    } 
  
    void push(int x) 
    { 
        if (S.empty()) { 
            maxEle = x; 
            S.push(x); 
            return; 
        } 
  
        if (x > maxEle) { 
            S.push(2 * x - maxEle); 
            maxEle = x; 
        } 
  
        else
            S.push(x); 
    }
	
	void getMax() 
    { 
        if (S.empty()) 
            cout << "Stack is empty\n"; 
  
        else
            cout<< maxEle << "\n"; 
    } 
}; 
  
int main() 
{ 

int n = 0;
    cin >> n;

    string query;
    //string value;
    int value;
    
    StackWithMax S;

    for (int i = 0; i < n; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            //stack.Push(std::stoi(value));       // stoi is used to convert string to integer. Works in C++11
            S.push(value);
        }
        else if (query == "pop") {
            S.pop();
        }
        
        else if (query == "max") {
            S.getMax() ;
        }
        else {
           exit(0);
        }
    }
    
    return 0; 
} 
