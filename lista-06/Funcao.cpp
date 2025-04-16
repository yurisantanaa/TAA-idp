#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
double funcao(double a, double b, double x) {
    return a * x + b * sin(x);
}
 
double busca_binaria(double a, double b, double c) {
    double esquerda = 0.0, direita = 1e9, meio;
 
    while (fabs(direita - esquerda) > 1e-4) {
        meio = (esquerda + direita) / 2.0;
 
        if (funcao(a, b, meio) < c)
            esquerda = meio;
        else
            direita = meio;
    }
 
    return meio;
}
 
int main() {
    double a, b, c;
    cin >> a >> b >> c;
 
    double resultado = busca_binaria(a, b, c);
 
    cout << fixed << setprecision(4) << resultado << endl;
 
    return 0;
}