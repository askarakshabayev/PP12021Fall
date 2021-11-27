// count_if(begin, end, check_function)

#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    vector<int> a;
    for (int i = 2; i <= 100; i++) 
        a.push_back(i);
    
    int cnt = count_if(a.begin(), a.end(), is_prime);

    // int b[100];
    // fill(b, b + 100, 5);
    cout << cnt;
    return 0;
}