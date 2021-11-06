#include <iostream>

using namespace std;

int main() {
    int n, a[1000];
    // int number_of_elements = sizeof(a) / sizeof(int);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxi = a[0];
    // 3
    // -1 -2 -3
    for (int i = 0; i < n; i++) { // i = 2
        if (a[i] > maxi) {
            maxi = a[i];
        }
    }

    cout << maxi << endl;
    return 0;
}