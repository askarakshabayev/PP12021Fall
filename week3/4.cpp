#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin); // read 
    freopen("output.txt", "w", stdout); // write

    int n = 0, sum = 0, k;
    while (cin >> k) { // k = 3
        n += 1;         // n = 3
        sum += k;       // sum = 10
    }
    cout << n << " " << sum;
    return 0;
}