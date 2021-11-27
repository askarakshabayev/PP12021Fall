// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
// next_permutation(begin, end)
#include <iostream>

using namespace std;

int main() {
    int a[3] = {3, 2, 1};
    bool ok = next_permutation(a, a + 3);
    cout << ok << endl;
    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
    return 0;
}