#include <iostream>
#include <vector>

using namespace std;

bool f(string s1, string s2) {
    if (s1.length() < s2.length())
        return true;
    if (s1.length() > s2.length())
        return false;
    return (s1 < s2);
}

int main() {
    vector<string> a;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a.push_back(s);
    }
    sort(a.begin(), a.end(), f);
    // for (int i = 0; i < n; i++)
    //     for (int j = i + 1; j < n; j++)
    //         if (f(a[i], a[j])) // a[i] > a[j]
    //             swap(a[i], a[j]);

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;

}