#include <iostream>

using namespace std;

int main() {
    int sum = 0, k;

    do {
        cin >> k; // k = 0
        sum += k; // sum = 9 + 0 = 9
    } while (k != 0);

    cout << sum;
    return 0;
}