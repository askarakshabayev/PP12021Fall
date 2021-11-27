#include <iostream>
#include <stack>

using namespace std;
stack<char> st;

bool f(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else {
            if (st.empty()) 
                return false;
            if (s[i] == ')' && st.top() != '(')
                return false;
            if (s[i] == ']' && st.top() != '[')
                return false;
            if (s[i] == '}' && st.top() != '{')
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (f(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}