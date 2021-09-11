#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // for (int i = 0;;) { // i = 3
    //     i++;
    //     if (i == n)
    //         break;
    //     if (i % 2 == 0)
    //         continue;
    //     cout << i << endl;
    // }

    int i = 0;
    while (i < n) { // for (; i < n;)
        i++;
        cout << i;
    }

    return 0;
}