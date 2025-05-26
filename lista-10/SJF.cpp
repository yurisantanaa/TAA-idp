#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

struct Detento {
    string nome;
    int tempo;
    
    bool operator<(const Detento& outro) const {
        if (tempo == outro.tempo) {
            return nome < outro.nome;
        }
        return tempo < outro.tempo;
    }
};

int main() {
    int N;
    cin >> N;
    
    priority_queue<Detento> fila;
    
    for (int i = 0; i < N; ++i) {
        string nome;
        int tempo;
        cin >> nome >> tempo;
        fila.push({nome, tempo});
    }
    
    while (!fila.empty()) {
        Detento atual = fila.top();
        fila.pop();   
        cout << atual.nome << " " << atual.tempo << endl;
        atual.tempo /= 2;
        if (atual.tempo >= 1) {
            fila.push(atual);
        }
    }
    
    return 0;
}
