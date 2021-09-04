#include <iostream>

using namespace std;

int main() {
    // cout << "size of short: " << sizeof(short) << endl;
	// cout << "size of int: " << sizeof(int) << endl;
	// cout << "size of float: " << sizeof(float) << endl; // 4
	// cout << "size of double: " << sizeof(double) << "\n"; // 8
	// cout << "size of char: " << sizeof(char) << "\n";
	// cout << "size of bool: " << sizeof(bool) << endl;
    // double a, b; // float
    // cin >> a >> b;
    // cout << a + b;
    char ch; // 97, 'b' = 99, 'c' = 100
    cin >> ch;
    cout << ch << " " << int(ch) << endl;
    cout << char(99) << endl;
    string s1, s2;
    s1 = "hello";
    s2 = "world";
    string s3 = s1 + s2;
    cout << s3;

    return 0;
}