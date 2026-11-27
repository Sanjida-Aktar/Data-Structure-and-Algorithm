#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> u(m), v(m), w(m);

    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i] >> w[i];
    }

    int src;
    cin >> src;

    const long long INF = 1e18;
    vector<long long> dist(n + 1, INF);

    dist[src] = 0;

    // Relaxation
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[u[j]] != INF && dist[u[j]] + w[j] < dist[v[j]]) {
                dist[v[j]] = dist[u[j]] + w[j];
            }
        }
    }

    // Negative Cycle Detection
    bool negativeCycle = false;

    for (int j = 0; j < m; j++) {
        if (dist[u[j]] != INF && dist[u[j]] + w[j] < dist[v[j]]) {
            negativeCycle = true;
            break;
        }
    }

    if (negativeCycle) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;

    while (t--) {
        int dest;
        cin >> dest;

        if (dist[dest] == INF) {
            cout << "Not Possible" << endl;
        }
        else {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}