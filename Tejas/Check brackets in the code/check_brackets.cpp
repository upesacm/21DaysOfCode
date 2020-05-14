#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    string text;
    getline(cin, text);
    int invalid_position = -1;

    stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
        	
        	// Process opening bracket
        	Bracket *b = new Bracket(next, position + 1);
            opening_brackets_stack.push(*b); 	
            
        }

        if (next == ')' || next == ']' || next == '}') {
        	
        	// Process closing bracket
        	if (opening_brackets_stack.size() == 0) {
                invalid_position = position + 1;
                break;
            } else if (opening_brackets_stack.top().Matchc(next)) {
                // pop it
                opening_brackets_stack.pop();
            } else {
                invalid_position = position + 1;
                break;
            }
            
        }
    }

		// Display Answer
	 if (opening_brackets_stack.size() == 0 && invalid_position == -1) {
        cout << "Success" << endl;
    } else {
        if (opening_brackets_stack.size() && invalid_position == -1) {
            invalid_position = opening_brackets_stack.top().position;
        }
        cout << invalid_position << endl;
    }

    return 0;
}





