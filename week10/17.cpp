#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> a;
    a.insert(2);
    a.insert(3);
    a.insert(2);
    a.insert(3);
    a.insert(1);

    multiset<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    return 0;
}