#include <iostream>

using namespace std;
int a[20][20];

int main() {
    int n;
    cin >> n;
    int step = n - 1;
    int x = 0, y = 0;
    int k = 1;
    while (step > 0) {
        for (int i = 0; i < step; i++) {
            a[x][y] = k;
            y++;
            k++;
        }
        for (int i = 0; i < step; i++) {
            a[x][y] = k;
            x++;
            k++;
        }
        for (int i = 0; i < step; i++) {
            a[x][y] = k;
            y--;
            k++;
        }
        for (int i = 0; i < step; i++) {
            a[x][y] = k;
            x--;
            k++;
        }
        x++;
        y++;
        step -= 2;
    }

    if (n % 2 == 1) {
        a[n / 2][n / 2] = n * n;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}