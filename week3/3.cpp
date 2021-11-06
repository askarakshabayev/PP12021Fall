#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin); // read 
    freopen("output.txt", "w", stdout); // write

    int n, k, sum = 0; // 12
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        sum += k;
    }

    cout << sum;
    return 0;
}