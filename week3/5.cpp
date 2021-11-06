#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    int n = 0;
    while (cin >> s) {
        cout << s << endl;
        n++; // n = 3
    }
    cout << n;
    return 0;
}