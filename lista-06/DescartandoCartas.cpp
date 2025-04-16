#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> baralho;
    for (int i = N; i >= 1; --i) {
        baralho.push(i);
    }

    vector<int> descartadas;

    while (baralho.size() > 1) {
        descartadas.push_back(baralho.front());
        baralho.pop();

        int topo = baralho.front();
        baralho.pop();
        baralho.push(topo);
    }

    cout << "Descarte:";
    if (!descartadas.empty()) {
        for (size_t i = 0; i < descartadas.size(); ++i) {
            if (i == 0)
                cout << " " << descartadas[i];
            else
                cout << ", " << descartadas[i];
        }
    }
    cout << endl;

    cout << "Ultima carta: " << baralho.front() << endl;

    return 0;
}
