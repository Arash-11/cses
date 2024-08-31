#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    void process(unsigned int n) {
        unsigned long int m = n;
        while (m > 1) {
            cout << m << " ";
            if (m % 2 == 0) {
                m /= 2;
            } else {
                m = m * 3 + 1;
            }
        }
        cout << m << "\n";
    }
};

int main() {
    unsigned int n;
    cin >> n;

    Solution solution;
    solution.process(n);

    return 0;
}
