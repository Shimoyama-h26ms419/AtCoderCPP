#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int ans = 2 * (A * (B + C) + B * C);
    cout << ans << endl;

    return 0;
}