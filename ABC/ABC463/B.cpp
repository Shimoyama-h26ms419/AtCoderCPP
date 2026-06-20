#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    char X;
    cin >> N >> X;

    bool ok = false;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;

        if (S[X - 'A'] == 'o') ok = true;
    }

    cout << (ok ? "Yes" : "No") << '\n';

    return 0;
}