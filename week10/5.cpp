#include <iostream>

using namespace std;

int main() {
    pair<string, pair<string, string> > students[100];
    string ID, name, surname;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ID >> name >> surname;
        pair<string, string> name_surnamme = make_pair(name, surname);
        pair<string, pair<string, string> > all_data = make_pair(ID, name_surnamme);

        students[i] = all_data;
    }

    for (int i = 0; i < n; i++) {
        cout << students[i].first << " " << students[i].second.second << endl;
    }
    return 0;
}