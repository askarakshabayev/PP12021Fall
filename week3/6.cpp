#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    int n = 0, k = 0, sum = 0;                 
    // ab cd
    // k p
    
    while (getline(cin, s)) { // s = "k p"
        k = 0;                // k = 2
        n = n + 1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                k++; 
            }
        }
        sum += k; // sum = sum + k
        cout << n << " " << k << endl;
    }
    cout << sum;
    // 1 4
    // 2 2
    
    return 0;
}