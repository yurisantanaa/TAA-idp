#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <string>
using namespace std;

struct Pokemon {
    string nome;
    int forca;
  
    bool operator<(const Pokemon& outro) const {
        if (forca == outro.forca) {
            return nome < outro.nome;
        }
        return forca < outro.forca; 
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int P;
    cin >> P;
    
    priority_queue<Pokemon> torneio;
    int batalhas = 0;
    
    for (int i = 0; i < P; ++i) {
        string nome;
        int forca;
        cin >> nome >> forca;
        torneio.push({nome, forca});
    }
    
    while (torneio.size() > 1) {
        Pokemon primeiro = torneio.top();
        torneio.pop();
        Pokemon segundo = torneio.top();
        torneio.pop();
        
        cout << primeiro.nome << " (" << primeiro.forca << ") x (" << segundo.forca << ") " << segundo.nome << " : ";
        
        if (primeiro.forca > segundo.forca) {
            primeiro.forca -= segundo.forca;
            torneio.push(primeiro);
            cout << primeiro.nome << " venceu" << endl;
        } else if (segundo.forca > primeiro.forca) {
            segundo.forca -= primeiro.forca;
            torneio.push(segundo);
            cout << segundo.nome << " venceu" << endl;
        } else {
            cout << "empate" << endl;
        }
    }
    
    if (torneio.size() == 1) {
        Pokemon vencedor = torneio.top();
        cout << vencedor.nome << " venceu com " << vencedor.forca << endl;
    } else {
        cout << "nenhum vencedor" << endl;
    }
    
    return 0;
}