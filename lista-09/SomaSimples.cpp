#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    unordered_set<int> elementos;
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        elementos.insert(A[i]);
    }
    
    for (int i = 0; i < N; ++i) {
        int complemento = K - A[i];
        if (elementos.count(complemento)) {
            if (complemento == A[i]) {
                int cont = 0;
                for (int num : A) {
                    if (num == A[i]) cont++;
                    if (cont >= 2) {
                        cout << A[i] << " " << complemento << endl;
                        return 0;
                    }
                }
            } else {
                cout << A[i] << " " << complemento << endl;
                return 0;
            }
        }
    }
    
    cout << "Nao existe" << endl;
    return 0;
}