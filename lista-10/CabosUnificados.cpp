#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> cabos(N);
    for (int i = 0; i < N; ++i) {
        cin >> cabos[i];
    }
    
    priority_queue<int, vector<int>, greater<int>> pq(cabos.begin(), cabos.end());
    
    long long custo_total = 0;
    
    while (pq.size() > 1) {
        int primeiro = pq.top();
        pq.pop();
        int segundo = pq.top();
        pq.pop();
        int custo = primeiro > segundo? primeiro : segundo;
        custo_total += custo;
        int tamanho = primeiro + segundo;
        pq.push(tamanho);
    }
    
    cout << custo_total << endl;
    
    return 0;
}