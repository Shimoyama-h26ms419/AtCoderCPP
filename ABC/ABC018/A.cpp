#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    int x = 1, y = 1, z = 1;

    if (A < B) x++;
    if (A < C) x++;
    if (B < A) y++;
    if (B < C) y++;
    if (C < A) z++;
    if (C < B) z++;

    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';

    return 0;
}