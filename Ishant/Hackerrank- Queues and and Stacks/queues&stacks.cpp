#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
    private:
        vector<char> s_arr;
        vector<char> q_arr;
        int s = 0;
        int q = 0;
    public:
        void pushCharacter(char c)
        {
            s_arr.push_back(c);
        }
        void enqueueCharacter(char c)
        {
            q_arr.push_back(c);
            q++;
        }
        char popCharacter()
        {
            return s_arr[s];
            s++;
        }
        char dequeueCharacter()
        {
            return q_arr[q-1];
            q--;
        }
};

int main() {
    
    string s;
    getline(cin, s);
    
    Solution obj;
    
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}