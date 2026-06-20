#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<ll> H(N), L(N);
    for (int i = 0; i < N; i++) cin >> H[i] >> L[i];

    vector<ll> suf(N);
    suf[N - 1] = H[N - 1];
    for (int i = N - 2; i >= 0; i--)
        suf[i] = max(suf[i + 1], H[i]);

    int Q;
    cin >> Q;

    while (Q--) {
        int T;
        cin >> T;

        auto it = ranges::upper_bound(L.begin(), L.end(), T);
        int d = (int) ranges::distance(L.begin(), it);
        cout << suf[d] << '\n';
    }

    return 0;
}