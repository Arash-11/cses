#include <iostream>

using namespace std;
using llu = unsigned long long int;

/*
each cell shows the number of combinations
possible when one of the two knights is placed
at that cell.

when n=3
 --- --- ---
| 8 | 7 | 6 |
 --- --- ---
| 5 | 4 | 3 |
 --- --- ---
| 2 | 1 | 0 |
 --- --- ---
8 + 7 + 6 +
5 + 4 + 3 +
2 + 1 + 0

...
*/
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

/*
when n=3
2 + 2 + 2 +     -> 6
1 + 0 + 1       -> 2

when n=4
2 + 3 + 3 + 2 +     -> 10
2 + 3 + 3 + 2 +
1 + 1 + 1 + 1       -> 4

when n=5
2 + 3 + 4 + 3 + 2 +     -> 14
2 + 3 + 4 + 3 + 2 +
2 + 3 + 4 + 3 + 2 +
2 + 3 + 4 + 3 + 2 +
1 + 1 + 2 + 1 + 1       -> 6

when n=6
2 + 3 + 4 + 4 + 3 + 2 +     -> 18
    ... (repeat 3 more times)
1 + 1 + 2 + 2 + 1 + 1       -> 8

when n=7
2 + 3 + 4 + 4 + 4 + 3 + 2 +     -> 22
    ... (repeat 4 more times)
1 + 1 + 2 + 2 + 2 + 1 + 1       -> 10

...
*/
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
