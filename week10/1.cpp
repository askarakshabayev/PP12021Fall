#include <iostream>
#include <vector>

using namespace std;

// vector in vector
// vector pass to function
// sorting vector
// vector of pair

int main() {
    vector<int> a;
    a.push_back(2); // 2 10 20 17
    a.push_back(10);
    a.push_back(20);
    a.push_back(17);

    a.pop_back();
    a.pop_back();
    // cout << a.size();
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}