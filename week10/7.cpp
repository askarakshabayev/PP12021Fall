#include <iostream>
#include <vector>

using namespace std;

void f(vector<int> &b) { // 5 10 100 30
    b[2] = 100;
}

int main() {
    vector<int> a;
    a.push_back(5);
    a.push_back(10);
    a.push_back(20);
    a.push_back(30); // 5 10 100 30
    f(a);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}