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
    int a[3] = {1, 1, 2};
    do { 
        for (int i = 0; i < 3; i++) 
            cout << a[i] << " ";
        cout << endl;
    } while (next_permutation(a, a + 3)); // a.begin(), a.end()
    // prev_permutation(a, a + 3)
    return 0;
}