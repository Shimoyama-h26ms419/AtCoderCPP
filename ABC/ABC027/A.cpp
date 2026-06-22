#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    map<int, int> mp;
    mp[l1]++; mp[l2]++; mp[l3]++;

    for (auto [k, v] : mp) {
        if (v == 1 || v == 3) {
            cout << k << '\n';
            return 0;
        }
    }

    return 0;
}