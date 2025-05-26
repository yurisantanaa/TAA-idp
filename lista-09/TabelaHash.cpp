#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, C;
    cin >> M >> C;
    
    vector<vector<int>> tabelaHash(M);
    
    for (int i = 0; i < C; ++i) {
        int key;
        cin >> key;
        int index = key % M;
        tabelaHash[index].push_back(key);
    }
    
    for (int i = 0; i < M; ++i) {
        cout << i << " -> ";
        for (size_t j = 0; j < tabelaHash[i].size(); ++j) {
            cout << tabelaHash[i][j] << " -> ";
        }
        cout << "\\" << endl;
    }
    
    return 0;
}