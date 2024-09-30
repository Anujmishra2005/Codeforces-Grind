#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    auto it = find(arr.begin(), arr.end() , 0);
    if (it != arr.begin()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
