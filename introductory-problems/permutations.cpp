#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    if (n < 4) {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }

    bool is_even = n % 2 == 0;
    int l_start = is_even ? 2 : 1;
    int r_start = is_even ? 1 : 2;

    cout << l_start;
    for (int i = l_start + 2; i < n; i += 2) {
        cout << " " << i;
    }
    cout << " " << n;
    for (int i = r_start; i < n; i += 2) {
        cout << " " << i;
    }
    cout << "\n";

    return 0;
}
