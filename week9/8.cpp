#include <iostream>

using namespace std;

bool used[8];
int a[8];
int cnt;

bool check(int x1, int y1, int x2, int y2) {
    return (abs(x1 - x2) == abs(y1 - y2));   // x1 = 1, y1 = 4, x2 = 3, y2 = 6
}

void f(int row) {
    if (row == 8) {
        cnt += 1;
        for (int i = 0; i < 8; i++)
            cout << i << " -- " << a[i] << endl;
        cout << endl;
        cout << endl;
        cout << endl;                
    }
    for (int col = 0; col < 8; col++) {  // row, col
        if (used[col] == false) {
            bool ok = true;
            for (int i = 0; i < row; i++) {
                if (check(i, a[i], row, col))
                    ok = false;
            }            
            if (ok) {
                a[row] = col;
                used[col] = true;
                f(row + 1);
                used[col] = false;
            }
        }
    }
}

int main() {
    cnt = 0;
    for (int i = 0; i < 8; i++)
        used[i] = false;
    f(0);
    cout << cnt;
    return 0;
}