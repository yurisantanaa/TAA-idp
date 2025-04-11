#include <iostream>
using namespace std;
 
typedef unsigned long long ull; 
 
ull swapBits(ull N, int P, int Q) {
 
    ull bitP = (N >> P) & 1;
    ull bitQ = (N >> Q) & 1;
 
    if (bitP != bitQ) {
        ull maskP = 1ULL << P;
        ull maskQ = 1ULL << Q;
 
        N ^= maskP;
        N ^= maskQ;
    }
 
    return N;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        ull N;
        int P, Q;
        cin >> N >> P >> Q;
 
        cout << swapBits(N, P, Q) << '\n';
    }
 
    return 0;
}