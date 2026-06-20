#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, D;
    cin >> M >> D;

    cout << (M % D == 0 ? "YES" : "NO") << '\n';

    return 0;
}