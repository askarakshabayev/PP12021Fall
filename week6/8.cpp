// 
#include <iostream>

using namespace std;
int a[100][100];

int main() {
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                a[i][j] = ++k;
            else
                a[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (a[i][j] == 0)
                cout << '.' << " ";
            else    
                cout << a[i][j];
        cout << endl;
    }

    return 0;
}