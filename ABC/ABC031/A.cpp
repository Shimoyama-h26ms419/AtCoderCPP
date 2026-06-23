#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, D;
    cin >> A >> D;

    cout << max((A + 1) * D, (D + 1) * A) << '\n';

    return 0;
}