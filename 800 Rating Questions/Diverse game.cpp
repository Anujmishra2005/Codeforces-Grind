#include <iostream>
#include <string>
#include <map>

using namespace std;

void tc() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << "Yes" << '\n';
        return;
    }

    if (n == 1) {
        cout << "No" << '\n';
        return;
    }

    // Count occurrences of '0' and '1' in s
    map<char, int> count_s;
    for (char ch : s) {
        count_s[ch]++;
    }

    // Count occurrences of '0' and '1' in t
    map<char, int> count_t;
    for (char ch : t) {
        count_t[ch]++;
    }

    // Check if transformation is possible
    if (count_s['1'] == count_t['1'] && count_s['0'] == count_t['0']) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        tc();
    }
    return 0;
}
