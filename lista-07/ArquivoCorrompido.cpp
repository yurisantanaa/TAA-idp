#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);            

    int T;
    cin >> T;

    while (T--) {
        int L;
        cin >> L;

        unordered_map<int, unordered_set<string>> alunos;
        int erros = 0;

        for (int i = 0; i < L; ++i) {
            int matricula;
            string disciplina;
            cin >> matricula >> disciplina;

            if (!alunos[matricula].insert(disciplina).second) {
                erros++;
            }
        }

        if (erros == 0)
            cout << "Arquivo OK\n";
        else
            cout << "Corrompido com " << erros << " erro(s)\n";
    }

    return 0;
}