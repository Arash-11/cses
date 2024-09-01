#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    char last = ' ';
    unsigned int count = 0, best = 0;
    cin >> input;

    for (char& c : input) {
        if (last != c) count = 0;
        count++;
        best = max(best, count);
        last = c;
    }

    cout << best << "\n";
    return 0;
}
