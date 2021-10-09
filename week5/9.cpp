#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {3, 6, 7, -1, 2};
    // 0x7ffeed8312b0
    // cout << a;
    // cout << *a << endl; // a[0]
    // cout << *(a + 1) << endl; //   a[1]
    // cout << a[3]; //   a[3]
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}