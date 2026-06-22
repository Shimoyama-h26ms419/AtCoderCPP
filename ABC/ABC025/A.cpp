#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    int N;
    cin >> S >> N;
    N--;

    cout << S[N / 5] << S[N % 5] << '\n';

    return 0;
}