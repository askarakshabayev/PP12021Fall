#include <iostream>

using namespace std;

int main() {
    // for (int i = 100; i <= 999; i++) {
    //     if ((i % 10 + i / 10 % 10 + i / 100) % 3 == 0)
    //         cout << i;
    // }
    for (int i = 1; i <= 9; i++) // i = 1
        for (int j = 0; j <= 9; j++) // j = 1
            for (int k = 0; k <= 9; k++) // k = 0 
                if ((i + j + k ) % 3 == 0) 
                    cout << i << j << k << endl;
    return 0;
}