#include <iostream>
#include <stack>

using namespace std;
stack<int> st;

int main() {
    st.push(11);
    st.push(45);
    st.push(12);
    st.push(5);
    st.pop();
    cout << st.top();
    return 0;
}