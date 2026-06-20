#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    cin >> A >> B;

    cout << (A.length() > B.length() ? A : B) << '\n';

    return 0;
}