#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <algorithm> 
using namespace std;

using Edge = pair<int, int>;       
using Path = pair<long long, int>; 

const long long INF = numeric_limits<long long>::max();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<long long> dist(n + 1, INF);
    priority_queue<Path, vector<Path>, greater<Path>> pq;

    int start_node = 1;
    dist[start_node] = 0;
    pq.push({0, start_node});

    while (!pq.empty()) {
        long long distanciaAtual = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (distanciaAtual > dist[u]) {
            continue;
        }

        for (const auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    long long maisDistante = 0;
    bool todosAmigosAlcancaveis = true;

    for (int i = 2; i <= n; ++i) {
        if (dist[i] == INF) {
            todosAmigosAlcancaveis = false;
        }
        maisDistante = max(maisDistante, dist[i]);
    }

    if (todosAmigosAlcancaveis) {
        cout << "Casa mais distante a " << maisDistante << " metros" << endl;
    } else {
        cout << "Impossivel chegar" << endl;
    }

    return 0;
}