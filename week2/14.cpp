#include <iostream>

using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) { // i = 2
        for (int j = 1; j <= 10; j++) { // j = 1
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}