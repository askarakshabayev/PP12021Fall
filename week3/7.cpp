#include <iostream>

using namespace std;

int main() {
    int n, k, sum = 0;
    cin >> n;
    while (n > 0) {
        k = n % 10;
        n = n / 10;
        sum += k;
    }
    cout << sum;
    return 0;
}