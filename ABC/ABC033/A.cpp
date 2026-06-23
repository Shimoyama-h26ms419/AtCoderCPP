#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cout << (N % 1111 == 0 ? "SAME" : "DIFFERENT") << '\n';

    return 0;
}