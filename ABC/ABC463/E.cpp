#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    ll Y;
    cin >> N >> M >> Y;

    vector<vector<pair<int, ll>>> G(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v;
        ll T;
        cin >> u >> v >> T;
        u--; v--;
        G[u].emplace_back(v, T);
        G[v].emplace_back(u, T);
    }

    vector<ll> X(N);
    for (int i = 0; i < N; i++) cin >> X[i];

    for (int i = 0; i < N; i++) {
        G[i].emplace_back(N, X[i]);
        G[N].emplace_back(i, X[i] + Y);
    }

    vector dist(N + 1, 1LL << 62);
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<>> pq;
    dist[0] = 0;
    pq.emplace(0, 0);

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : G[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }

    for (int i = 1; i < N; i++) cout << dist[i] << ' ';

    return 0;
}