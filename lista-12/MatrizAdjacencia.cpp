#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V, C;
    cin >> V >> C;

    vector<vector<int>> adj_matrix(V, vector<int>(V, 0));

    for (int i = 0; i < C; ++i) {
        int a, b;
        cin >> a >> b;

        int row = a - 1;
        int col = b - 1;

        adj_matrix[row][col] = 1;
        adj_matrix[col][row] = 1;
    }

    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << adj_matrix[i][j];
            if (j < V - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}