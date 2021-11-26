#include <iostream>

using namespace std;

int main() {
    // pair<int, string> p;
    // p.first = 10;
    // p.second = "Test";
    // cout << p.first << " " << p.second;
    pair<string, string> students[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, surname;
        cin >> name >> surname;
        // students[i].first = name;
        // students[i].second = surname;
        students[i] = make_pair(name, surname);
    }
    return 0;
}