#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Jogador {
    string nome;
    string tempoStr;
    int tempoSeg;
};

int converterTempo(const string& tempo) {
    int min = stoi(tempo.substr(0, tempo.find(':')));
    int seg = stoi(tempo.substr(tempo.find(':') + 1));
    return min * 60 + seg;
}

bool criterio(const Jogador& a, const Jogador& b) {
    if (a.tempoSeg != b.tempoSeg)
        return a.tempoSeg > b.tempoSeg;
    return a.nome > b.nome; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int J;
    cin >> J;
    vector<Jogador> jogadores(J);

    for (int i = 0; i < J; ++i) {
        string nome, tempo;
        cin >> nome >> tempo;
        jogadores[i] = {nome, tempo, converterTempo(tempo)};
    }

    sort(jogadores.begin(), jogadores.end(), criterio);

    for (int i = 0; i < J; ++i) {
        cout << (i + 1) << ". " << jogadores[i].tempoStr << " - " << jogadores[i].nome << '\n';
    }

    return 0;
}
