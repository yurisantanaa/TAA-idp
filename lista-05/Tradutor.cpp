#include <iostream>
#include <stack>
using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty() || !isMatching(st.top(), c)) {
                cout << "SyntaxError" << endl;
                return 0;
            }
            st.pop();
        }
    }

    if (st.empty()) {
        cout << "OK" << endl;
    } else {
        cout << "SyntaxError" << endl;
    }

    return 0;
}