#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Priority when the operator is OUTSIDE the stack (waiting to get in)
int getOutStack(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 3;
    if (x == '^') return 6;
    if (x == '(') return 7;
    if (x == ')') return 0;
    return -1;
}

// Priority when the operator is ALREADY INSIDE the stack
int getInStack(char x) {
    if (x == '+' || x == '-') return 2;
    if (x == '*' || x == '/') return 4;
    if (x == '^') return 5; 
    if (x == '(') return 0; 
    return -1;
}

bool isOperand(char x) {
    return (x != '+' && x != '-' && x != '*' && x != '/' && x != '^' && x != '(' && x != ')');
}

string convert(string infix) {
    stack<char> st;
    string postfix = "";
    
    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        
        // Pattern 1: Operands always go straight to the output string
        if (isOperand(ch)) {
            postfix += ch;
        } 
        // Pattern 2: Opening parenthesis goes straight to stack
        else if (ch == '(') {
            st.push(ch);
        }
        // Pattern 3: Closing parenthesis pops everything until '('
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // Pop and discard the opening '('
        }
        // Pattern 4: Regular operators fight for precedence
        else {
            while (!st.empty() && getOutStack(ch) <= getInStack(st.top())) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    
    // Empty whatever is left over at the very end
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    
    return postfix;
}

int main() {
    string infix = "((a+b)*c)-d^e^f";
    cout << "Postfix: " << convert(infix) << "\n";
    return 0;
}