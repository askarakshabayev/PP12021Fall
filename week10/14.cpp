#include <iostream>
#include <map>
#define iter map<string, int>::iterator
#define ll long long
#define mp make_pair

using namespace std;
map<string, int> a;

int main() {
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        // if (a.find(s) == a.end())
        //     a.insert(mp(s, 0)); // a[s] = 0;
        a[s] += 1; 
    }
    // a["abc"] = 3
    // a["def"] = 1
    a["qwer"] = 10;

    iter it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " - " << (*it).second << endl;
    }
    return 0;
}