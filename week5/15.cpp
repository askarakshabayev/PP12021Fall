// s.insert(start, string)
// s = hello; s.insert(2, "abc") => heabcllo

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    s.insert(2, "abc");
    cout << s;
    return 0;
}