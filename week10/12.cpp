#include <iostream>
#include <set>

using namespace std;

int main() {
    // set<string> a;
    // a.insert("hello");
    // a.insert("abc");
    // a.insert("aab");
    // a.insert("helloooo");

    // set<string>::iterator it;
    // for (it = a.begin(); it != a.end(); it++)
    //     cout << *it << endl;
    
    // a.insert('h');
    // a.insert('e');
    // a.insert('l');
    // a.insert('l');
    // a.insert('o');
    string s;
    cin >> s;
    set<char> a(s.begin(), s.end());

    set<char>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " ";

    return 0;
}