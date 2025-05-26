#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
    int A;
    cin >> A;

    set<string> itens;
    vector<string> ordemInsercao;

    for (int i = 0; i < A; ++i) {
        int P;
        cin >> P;

        for (int j = 0; j < P; ++j) {
            string item;
            cin >> item;

            if (itens.find(item) == itens.end()) {
                cout << "adicionando " << item << endl;
                itens.insert(item);
                ordemInsercao.push_back(item);
            } else {
                cout << item << " ja tem" << endl;
            }
        }
    }

    cout << "Itens do churrasco:" << endl;
    vector<string> ordenados(itens.begin(), itens.end());
    for (const string& s : ordenados)
        cout << s << endl;

    return 0;
}
