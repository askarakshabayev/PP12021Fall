#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

//  data_type name(arg1, arg2, arg3) {
//      if (arg1 + arg2 > arg3)
//          return arg1
//  }

int max_(int q, int w) { // q = 5, w = 6
    if (q > w)
        return q;
    return w;
}

int main() {
    int a, b;
    cin >> a >> b; // a = 6, b = 5
    int p = max_(a, b);
    cout << p;

    // string s;
    // sort(s.begin(), s.end());
    return 0;
}