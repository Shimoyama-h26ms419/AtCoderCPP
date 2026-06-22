#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C, K, S, T;
    cin >> A >> B >> C >> K >> S >> T;

    int ans = S * A + T * B - ((S + T) >= K ? (S + T) * C : 0);
    cout << ans << '\n';

    return 0;
}