#include <iostream>

using namespace std;

int f(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    return f(x, n - 1) * x;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << f(x, n);
    return 0;
}