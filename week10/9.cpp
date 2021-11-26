#include <iostream>
#include <vector>

using namespace std;
vector<vector<int> > a;
vector<int> b;
int main() {
    int n, m, x;
    cin >> n; // i = 1
    for (int i = 0; i < n; i++) { // n = 6
        cin >> m;
        b.clear();
        for (int j = 0; j < m; j++) {
            cin >> x;             // x = 2
            b.push_back(x);
        }
        a.push_back(b);
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