#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        ans += (s / 10) * e;
    }

    cout << ans << '\n';

    return 0;
}