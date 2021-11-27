#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool good_bracket = true;
    int k = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            k += 1;
        else
            k -= 1;
        if (k < 0) {
            good_bracket = false;
            break;
        }
    }
    if (k != 0)
        good_bracket = false;
    if (good_bracket)
        cout << "YES";
    else
        cout << "NO";



    return 0;
}