#include <bits/stdc++.h>
using namespace std;

int parent[100005];

int find(int x) {
    if (parent[x] == x)
        return x;

    return parent[x] = find(parent[x]);
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        int pu = find(u);
        int pv = find(v);

        if (pu == pv) {
            count++;
        }
        else {
            parent[pu] = pv;
        }
    }

    cout << count << endl;

    return 0;
}