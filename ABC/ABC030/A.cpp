#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int x = B * C, y = D * A;
    string ans;

    if (x > y)
        ans = "TAKAHASHI";
    else if (x < y)
        ans = "AOKI";
    else
        ans = "DRAW";

    cout << ans << '\n';

    return 0;
}