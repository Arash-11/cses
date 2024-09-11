#include <iostream>

using namespace std;
using llu = unsigned long long int;

llu get_y(llu y) {
    llu num_y;
    if (y == 1) num_y = 1;
    else num_y = y % 2 == 0 ? y * y : (y - 1) * (y - 1) + 1;
    return num_y;
}

llu get_x(llu x) {
    return x % 2 != 0 ? x * x : (x - 1) * (x - 1) + 1;
}

int main() {
    int t;
    cin >> t;

    llu nums[t];

    for (int i = 0; i < t; i++) {
        llu y, x;
        cin >> y;
        cin >> x;
        if (y >= x) {
            nums[i] = y % 2 == 0 ? get_y(y) - (x - 1) : get_y(y) + (x - 1);
        } else {
            nums[i] = x % 2 == 0 ? get_x(x) + (y - 1) : get_x(x) - (y - 1);
        }
    }

    for (llu n : nums) {
        cout << n << "\n";
    }

    return 0;
}
