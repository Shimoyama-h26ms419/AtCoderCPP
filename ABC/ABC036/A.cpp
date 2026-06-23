#include <bits/stdc++.h>

using namespace std;

int ceilDiv(int x, int y) {
    return (x + y - 1) / y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    cout << ceilDiv(B, A) << endl;

    return 0;
}