// s1 = "hello"
// s2 = "world"
// s3 = s1 + s2; s3 = "helloworld"
#include <iostream>

using namespace std;

int main() {
    string s1 = "hello\n";
    string s2 = "world";
    string s3 = s1 + s2;
    cout << s3;
    cout << s3.size();
    return 0;
}