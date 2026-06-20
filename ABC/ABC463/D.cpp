#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<pair<ll, ll>> A(N);
    for (int i = 0; i < N; i++) cin >> A[i].second >> A[i].first;
    ranges::sort(A);

    auto check = [&](ll d) {
        int count = 0;
        ll gap = max(d, 1LL);
        ll last = LLONG_MIN / 2;

        for (auto& [r, l] : A) {
            if (l >= last + gap) {
                count++;
                last = r;

                if (count >= K) return true;
            }
        }

        return count >= K;
    };

    if (!check(0)) {
        cout << "-1\n";
        return 0;
    }

    ll lo = 0, hi = 2E9;

    while (lo < hi) {
        ll mid = lo + (hi - lo + 1) / 2;

        if (check(mid))
            lo = mid;
        else
            hi = mid - 1;
    }

    cout << lo << '\n';

    return 0;
}