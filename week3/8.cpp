#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0; // s = "32" s.size() = 6
    for (int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0'); // s[0] = '3' - '0' = 51 - 48 = 3
    }
    cout << sum;
    return  0;
}