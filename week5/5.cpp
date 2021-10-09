// a = 1234123412341283740918237409182374092183740912837409213874
// b = 128347019283740912837409182374098127340981723094871203984710293

#include<iostream>

using namespace std;

int main() {
    string a, b, maxi;
    cin >> a >> b;

    if (a.size() > b.size())
        maxi = a;
    else if (a.size() < b.size())
        maxi = b;
    else {
        if (a > b)
            maxi = a;
        else
            maxi = b;
    }
    cout << maxi;
    return 0;
}