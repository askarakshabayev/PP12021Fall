#include <iostream>

using namespace std;

int fib[100];

// 1 1 2 3 5 0
// 
int f(int n) {
    if (fib[n] != 0) 
        return fib[n];

    if (n == 0 || n == 1)
        return 1;
    fib[n] = f(n - 1) + f(n - 2);
    return fib[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}