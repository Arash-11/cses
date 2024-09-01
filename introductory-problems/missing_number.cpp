#include <iostream>

using namespace std;

typedef unsigned long long int llu;

int main() {
    llu n, input, sum = 0;
    cin >> n;

    llu expected_total = (n * (n + 1)) / 2;

    for (llu i = 0; i < n - 1; i++) {
        cin >> input;
        sum += input;
    }

    cout << expected_total - sum << "\n";

    return 0;
}
