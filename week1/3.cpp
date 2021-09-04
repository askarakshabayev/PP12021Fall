#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "a + b = " << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl; 
    //a++; a = a + 1;
    // int c = a++;
    // int d = ++b;
    // cout << c << " " << d << endl;
    a += b; // a = a + b
    // a -= b; // a = a - b
    // a *= b; // a = a * b
    cout << a;
    return 0;
}