#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    vector v = {a, b, c};
    ranges::sort(v);

    cout << v[1] << '\n';

    return 0;
}