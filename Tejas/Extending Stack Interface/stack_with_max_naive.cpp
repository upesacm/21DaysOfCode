#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class StackWithMax {
    vector<int> stack;

  public:

    void Push(int value) {
        stack.push_back(value);
    }

    void Pop() {
        stack.pop_back();
    }

    int Max() const {
        return *max_element(stack.begin(), stack.end());
    }
};

int main() {
    int n = 0;
    cin >> n;

    string query;
    //string value;
    int value;

    StackWithMax stack;

    for (int i = 0; i < n; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            //stack.Push(std::stoi(value));       // stoi is used to convert string to integer. Works in C++11
            stack.Push(value);
        }
        else if (query == "pop") {
            stack.Pop();
        }
        else if (query == "max") {
            cout << stack.Max() << "\n";
        }
        else {
           exit(0);
        }
    }
    return 0;
}
