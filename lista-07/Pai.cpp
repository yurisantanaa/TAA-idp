#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> V(N);
    unordered_map<int, int> valor_para_indice;

    for (int i = 0; i < N; ++i) {
        cin >> V[i];
        if (V[i] != -1)
            valor_para_indice[V[i]] = i;
    }

    while (C--) {
        int consulta;
        cin >> consulta;

        if (valor_para_indice.find(consulta) == valor_para_indice.end()) {
            cout << "NULL\n";
            continue;
        }

        int idx = valor_para_indice[consulta];

        if (idx == 0) {
            cout << "RAIZ\n";
        } else {
            int pai = (idx - 1) / 2;
            if (V[pai] == -1)
                cout << "NULL\n";
            else
                cout << V[pai] << "\n";
        }
    }

    return 0;
}