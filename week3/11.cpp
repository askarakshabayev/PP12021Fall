#include <iostream>

using namespace std;

int main() {
    int a[1000], n;

    cin >> n; // n = 3
              // 3 5 8
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}