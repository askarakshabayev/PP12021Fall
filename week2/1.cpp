#include <iostream>

using namespace std;

int main() {
    // int n;
    // cin >> n;
    // bool ok;
    // ok = (n % 2 == 0);
    // cout << ok << endl;

    // int a, b;
    // cin >> a >> b;
    // bool ok = (a > b && (a % 2 == 0));
    // cout << ok;

    int a, b;
    cin >> a >> b;
    bool ok = ((a % 2 == 0) || (b % 2 == 0));
    cout << ok;
        
    return 0;
}