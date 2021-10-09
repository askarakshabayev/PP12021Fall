// 24 32 => 8
// gcd(a, b)

#include <iostream>

// nok = (a * b) / gcd(a, b)
using namespace std;

int gcd(int a, int b) {
    // a = 0
    // b = 8
    while (a > 0 && b > 0) {
        if (a > b)
            a %= b;
        else 
            b %= a;
    }
    
    return a + b;
}

int nok(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << nok(n, m);
    return 0;
}