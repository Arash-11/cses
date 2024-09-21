#include <iostream>
#include <vector>

using namespace std;
using llu = unsigned long long int;

int main() {
    llu n;
    cin >> n;

    // explicitly modify where the division by 2 is done to avoid overflow
    llu sum = n % 2 == 0 ? (n / 2) * (n + 1) : n * ((n + 1) / 2);

    if (sum % 2 != 0) {
        cout << "NO" << "\n";
        return 0;
    }

    cout << "YES" << "\n";

    vector<llu> first_set;
    llu i = sum / 2;
    llu last = n;
    while (last > 0) {
        first_set.push_back(last);
        i = i - last;
        last = i >= last ? last - 1 : i;
    }

    int first_set_size = first_set.size();

    cout << first_set_size << "\n";
    for (auto i : first_set) {
        cout << i << " ";
    }
    cout << "\n";

    cout << n - first_set_size << "\n";
    int idx = first_set_size - 1;
    for (llu i = 1; i <= n; i++) {
        if (first_set[idx] == i) {
            idx--;
            continue;
        }
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
