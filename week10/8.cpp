#include <iostream>
#include <vector>

using namespace std;
vector<int> a[100];
int main() {
    int n, m, x;
    cin >> n; // i = 1
    for (int i = 0; i < n; i++) { // n = 6
        cin >> m;                 // m = 2
        for (int j = 0; j < m; j++) {
            cin >> x;             // x = 2
            a[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
// 0 - 1, 23
// 1 - 2
// 2 - 5 10 20 11 16