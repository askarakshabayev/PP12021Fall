#include <iostream>
#include <map>
#define map_it map<string, pair<string, string> >

using namespace std;
map_it a;
int n;

int main() {
    cin >> n;
    string ID, name, surname;
    for (int i = 0; i < n; i++) {
        cin >> ID >> name >> surname;
        a[ID] = make_pair(name, surname);
    }

    map_it::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second.first << endl;
    }
    return 0;
}