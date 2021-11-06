#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    string s = "hello";
    cout << *s.begin();

    // *s.begin() = s.front() = s[0]
    // sort(s.begin(), s.end());
    // reverse(s.begin(), s.end());
    // cout << s.front() << " " << s[0];
    return 0;
}