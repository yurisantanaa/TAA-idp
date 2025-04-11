#include <iostream>
#include <cmath>
using namespace std;
 
typedef unsigned long long ull;
 
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N;
    cin >> N;
 
    while (N--) {
        ull V;
        cin >> V;
        int count = __builtin_popcountll(V);
 
        if (isPrime(count)) {
            cout << V << " eh um pribit\n";
        } else {
            cout << V << " nao eh um pribit\n";
        }
    }
 
    return 0;
}