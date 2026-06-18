#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cout << (N == 11 ? 12 : (N + 1) % 12) << '\n';

    return 0;
}