#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int W, H;
    cin >> W >> H;

    cout << (W * 3 == H * 4 ? "4:3" : "16:9") << '\n';

    return 0;
}