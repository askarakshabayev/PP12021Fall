#include <iostream>
#include <queue>

using namespace std;

int main() {
    deque<int> a;
    a.push_back(5); // 8 6 5 7
    a.push_front(6);
    a.push_back(7);
    a.push_front(8);
    a.back();
    a.front();
    a.pop_back();
    a.pop_front();
}