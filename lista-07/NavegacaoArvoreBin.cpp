#include <iostream>
#include <vector>

using namespace std;

struct No {
    int valor;
    No* esquerda;
    No* direita;

    No(int v) : valor(v), esquerda(nullptr), direita(nullptr) {}
};

No* inserir(No* raiz, int valor) {
    if (!raiz) return new No(valor);

    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else
        raiz->direita = inserir(raiz->direita, valor);

    return raiz;
}

void inFixa(No* raiz, vector<int>& result) {
    if (!raiz) return;
    inFixa(raiz->esquerda, result);
    result.push_back(raiz->valor);
    inFixa(raiz->direita, result);
}

void preFixa(No* raiz, vector<int>& result) {
    if (!raiz) return;
    result.push_back(raiz->valor);
    preFixa(raiz->esquerda, result);
    preFixa(raiz->direita, result);
}

void posFixa(No* raiz, vector<int>& result) {
    if (!raiz) return;
    posFixa(raiz->esquerda, result);
    posFixa(raiz->direita, result);
    result.push_back(raiz->valor);
}

void printarArvore(const string& ordem, const vector<int>& result) {
    cout << ordem;
    for (int v : result)
        cout << " " << v;
    cout << '\n';
}

int main() {
    int N;
    cin >> N;

    vector<int> valors(N);
    for (int i = 0; i < N; ++i)
        cin >> valors[i];

    No* raiz = nullptr;
    for (int val : valors)
        raiz = inserir(raiz, val);

    vector<int> in, pre, post;
    inFixa(raiz, in);
    preFixa(raiz, pre);
    posFixa(raiz, post);

    printarArvore("In.:", in);
    printarArvore("Pre:", pre);
    printarArvore("Pos:", post);

    return 0;
}
