#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
using namespace std;

struct Digimon {
    string nome;
    int fome;
    int timestamp;
    bool operator<(const Digimon& outro) const {
        if (fome == outro.fome) {
            return timestamp > outro.timestamp;
        }
        return fome < outro.fome;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A;
    cin >> A;
    
    priority_queue<Digimon> fila;
    unordered_map<string, int> fomeAtual;
    unordered_map<string, int> timestampMap;
    int timestamp = 0;
    
    for (int i = 0; i < A; ++i) {
        string acao;
        cin >> acao;
        
        if (acao == "CHEGA") {
            string nome;
            int F;
            cin >> nome >> F;
            fila.push({nome, F, timestamp});
            fomeAtual[nome] = F;
            timestampMap[nome] = timestamp;
            timestamp++;
        } else if (acao == "FOME") {
            string nome;
            int X;
            cin >> nome >> X;
            fomeAtual[nome] += X;
            fila.push({nome, fomeAtual[nome], timestampMap[nome]});
        } else if (acao == "SAI") {
            string nome;
            cin >> nome;
            fomeAtual.erase(nome);
        } else if (acao == "SERVE") {
            while (!fila.empty()) {
                Digimon d = fila.top();
                fila.pop();
                if (fomeAtual.count(d.nome)) {
                    if (fomeAtual[d.nome] == d.fome) {
                        cout << d.nome << "\n";
                        fomeAtual.erase(d.nome);
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}