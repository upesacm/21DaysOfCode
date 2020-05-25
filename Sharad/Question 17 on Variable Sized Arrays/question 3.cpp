#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& i : nums) {
        cin >> i;
    }
    stack<int> stack;
    stack.push(n - 1);
    
    vector<int> next_gratest(n);
    
    
    next_gratest.back() = -1;
    
    for (int i = n - 2; i >= 0; --i) 
    {
        while (!stack.empty() && nums[i] >= nums[stack.top()]) 
        {
            stack.pop();
        }
        next_gratest[i] = stack.empty() ? -1 : stack.top();
        stack.push(i);
    }
    int t;
    cin >> t;
    int left, right;
    
    while ((t--) != 0) 
    {
        cin >> left >> right;
        int ans = 1;
        while (next_gratest[left] <= right) 
        {
            left = next_gratest[left];
            if (left == -1) 
            {
                break;
            }
            ans++;
        }
        cout << ans << endl;
    }
 
    return 0;
}
