#include <bits/stdc++.h>
using namespace std;

int calcDist(const string& g, const string& n) {
    int totalDist = 0;
    char prevGood = g[0];

    for (char c : n) {
        if (g.find(c) != string::npos) {
            prevGood = c;
            continue;
        }

        int minDist = numeric_limits<int>::max();
        char closestGood = ' ';

        for (char goodChar : g) {
            int dist = abs(static_cast<int>(c) - static_cast<int>(goodChar));

            if (dist < minDist) {
                minDist = dist;
                closestGood = goodChar;
            } else if (dist == minDist) {
                int prevDist = abs(static_cast<int>(prevGood) - static_cast<int>(goodChar));
                int closestDist = abs(static_cast<int>(prevGood) - static_cast<int>(closestGood));

                if (prevDist < closestDist) {
                    closestGood = goodChar;
                }
            }
        }

        totalDist += abs(static_cast<int>(c) - static_cast<int>(closestGood));
        prevGood = closestGood;
    }

    return totalDist;
}

int main() {
    string g, n;
    getline(cin, g);
    getline(cin, n);

    int totalDist = calcDist(g, n);
    cout << totalDist << endl;

    return 0;
}
