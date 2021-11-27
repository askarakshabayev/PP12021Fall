#include <iostream>
#include <map>
#define m_it multimap<string, int>::iterator
#define mp make_pair
#define ins insert

using namespace std;

int main() {
    multimap<string, int> mm;
    mm.ins(mp("banana", 300));
    mm.ins(mp("apple", 123));
    mm.ins(mp("apple", 124));
    mm.ins(mp("apple", 125));
    mm.ins(mp("apple2", 140));
    mm.ins(mp("apple", 500));
    string str;
    cin >> str;
    // pair<m_it, m_it> pr = mm.equal_range(str);
    // m_it it;
    // for (it = pr.first; it != pr.second; it++) {
    //     cout << (*it).second << endl;
    // } 
    m_it it;
    for (it = mm.begin(); it != mm.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    return 0;
}