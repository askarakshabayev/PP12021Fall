// 0 - 48
// 1 - 49
// ...

// a - 97
// b - 98
// ....
// A - 65
// B - 66
// Z - ...

#include <iostream>

using namespace std;

int main() {
    for (char i = '0'; i <= '9'; i++) {
        cout << i << " - " << (int)i << endl;
    }

    for (char i = 'a'; i <= 'z'; i++)
        cout << i << " - " << (int)i << endl;

    for (char i = 'A'; i <= 'Z'; i++)
        cout << i << " - " << (int)i << endl;
    
    return 0;
}