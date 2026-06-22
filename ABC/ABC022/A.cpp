#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, S, T, W;
    cin >> N >> S >> T >> W;

    int ans = 0;
    for (int i = 0; i < N - 1; i++) {
        if (W >= S && W <= T) ans++;

        int A;
        cin >> A;

        W += A;
    }

    if (W >= S && W <= T) ans++;
    cout << ans << '\n';

    return 0;
}