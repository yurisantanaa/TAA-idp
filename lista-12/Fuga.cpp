#include <iostream>
#include <vector>
#include <queue>
using namespace std;


vector<int> bfs(int start_node, int n, const vector<vector<int>>& adj, const vector<bool>& is_forbidden) {
    if (is_forbidden[start_node]) {
        return vector<int>(n + 1, -1);
    }

    vector<int> dist(n + 1, -1);
    queue<int> q;

    dist[start_node] = 0;
    q.push(start_node);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == -1 && !is_forbidden[v]) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, c_count;
    cin >> n >> m >> c_count;

    vector<bool> temCamera(n + 1, false);
    for (int i = 0; i < c_count; ++i) {
        int p;
        cin >> p;
        temCamera[p] = true;
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int e, s, k;
    cin >> e >> s >> k;

    vector<int> dist_part1 = bfs(e, n, adj, temCamera);
    long long distanciaSolo = (dist_part1[k] == -1) ? -1 : 2LL * dist_part1[k];

    vector<bool> no_forbidden_nodes(n + 1, false); 
    vector<int> dist_part2 = bfs(e, n, adj, no_forbidden_nodes);
    long long distanciaMassa = dist_part2[s];

    if (distanciaSolo == -1 || distanciaMassa == -1) {
        cout << "impossivel fugir" << endl;
    } else {
        cout << distanciaSolo << " " << distanciaMassa << endl;
    }

    return 0;
}