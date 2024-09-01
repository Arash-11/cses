#include <iostream>

using namespace std;
using llu = unsigned long long int;

int main() {
    int n;
    cin >> n;

    int m;
    llu count = 0;
    int nums[n];

    for (int i = 0; i < n; i++) {
        cin >> m;
        nums[i] = m;
    }

    for (int i = 1; i < n; i++) {
        int prev = nums[i - 1];
        int num = nums[i];
        if (prev > num) {
            nums[i] = prev;
            count += prev - num;
        }
    }

    cout << count << "\n";
    return 0;
}
