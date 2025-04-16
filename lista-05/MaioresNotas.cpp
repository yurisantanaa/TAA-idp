#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, Q;
    cin >> A >> Q;

    vector<int> notas(A);
    for (int i = 0; i < A; ++i) {
        cin >> notas[i];
    }

    while (Q--) {
        int C;
        cin >> C;
        auto it = upper_bound(notas.begin(), notas.end(), C);
        int acima = notas.end() - it;
        cout << acima << " notas maiores que " << C << '\n';
    }

    return 0;
}