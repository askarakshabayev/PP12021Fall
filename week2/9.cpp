#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x >= 95) {
        cout << "A";
    } else if (x >= 90 && x < 95) {
        cout << "A-";
    } else if (x >= 85 && x < 90) {
        cout << "B+";
    } else if (x >= 80 && x < 85) {
        cout << "B";
    } else if (x < 50) {
        cout << "F";
    }
    return 0;
}