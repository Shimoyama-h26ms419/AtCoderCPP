#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N == 100)
        cout << "Perfect";
    else if (N >= 90 && N <= 99)
        cout << "Great";
    else if (N >= 60 && N <= 89)
        cout << "Good";
    else
        cout << "Bad";

    cout << '\n';

    return 0;
}