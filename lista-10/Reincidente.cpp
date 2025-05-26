#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> baseDeDados;
    string nome;
    int artigo;

    while (cin >> nome >> artigo) {
        if (nome == "fim" && artigo == 0) {
            break;
        }

        if (baseDeDados.find(nome) == baseDeDados.end()) {
            baseDeDados[nome] = 1;
            cout << nome << " eh reu primario" << endl;
        } else {
            baseDeDados[nome]++;
            cout << nome << " eh reincidente com " << baseDeDados[nome] - 1 << " crime(s)" << endl;
        }
    }

    return 0;
}