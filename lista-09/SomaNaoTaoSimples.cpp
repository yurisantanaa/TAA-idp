#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    for (int i = 0; i < N - 2; ++i) {
        int esquerda = i + 1;
        int direita = N - 1;
        int target = K - A[i];
        
        while (esquerda < direita) {
            int sum = A[esquerda] + A[direita];
            if (sum == target) {
                cout << A[i] << " " << A[esquerda] << " " << A[direita] << endl;
                return 0;
            } else if (sum < target) {
                esquerda++;
            } else {
                direita--;
            }
        }
    }
    
    cout << "Nao existe" << endl;
    return 0;
}