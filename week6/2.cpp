// n = 10
// 2 4 6 8 10

#include <iostream>

using namespace std;

void print_even(int n) {
    for (int i = 2; i <= n; i+=2)
        cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    print_even(n);
    return 0;
}