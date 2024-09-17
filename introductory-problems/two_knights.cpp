#include <iostream>

using namespace std;
using llu = unsigned long long int;

llu total(int n) {
    llu total;
    llu m = n * n;
    if (n % 2 == 0) {
        llu mid = m / 2;
        total = m * (mid - 1) + mid;
    } else {
        total = m * ((m - 1) / 2);
    }
    return total;
}

llu invalid_count(int n) {
    return 2*((2*n - 3))*(n - 2) + 2*(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << 0 << "\n";
    if (n > 1) cout << 6 << "\n";
    for (int m = 3; m <= n; m++) {
        cout << total(m) - invalid_count(m) << "\n";
    }

    return 0;
}
