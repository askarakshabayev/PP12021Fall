// s1 = ttabcllabcppabc
// s2 = abc

// s1 = aaaaaa
// s2 = aa



#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int pos = 0;
    while (s1.find(s2, pos) != string::npos) {
        int index = s1.find(s2, pos);
        cout << index << " ";
        pos = index + 1;
    }
    return 0;
}

