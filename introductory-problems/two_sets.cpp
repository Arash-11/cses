#include <iostream>
#include <vector>

using namespace std;
using llu = unsigned long long int;

int main() {
    int n;
    cin >> n;

    llu sum = n*(n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO" << "\n";
        return 0;
    }

    cout << "YES" << "\n";

    vector<int> first_set;
    vector<int> second_set;
    llu counter = sum / 2;

    first_set.push_back(n);
    counter -= n;
    for (llu i = n - 1; counter > 0; i--) {
        if (i > counter) continue;
        first_set.push_back(i);
        counter -= i;
    }

    int first_set_size = first_set.size();

    cout << first_set_size << "\n";
    for (auto it = first_set.rbegin(); it != first_set.rend(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    cout << n - first_set_size << "\n";
    first_set_size--; // index now
    for (int i = 1; i <= n; i++) {
        if (first_set[first_set_size] == i) {
            first_set_size--;
            continue;
        }
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
