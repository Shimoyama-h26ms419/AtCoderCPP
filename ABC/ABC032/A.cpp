#include <bits/stdc++.h>

using namespace std;

int ceilDiv(int a, int b) {
    return (a + b - 1) / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n;
    cin >> a >> b >> n;

    int l = lcm(a, b);
    int t = ceilDiv(n, l);

    cout << t * l << '\n';

    return 0;
}