#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, B;
    cin >> N >> B;
 
    int mask = 1 << B;
 
    while (N--) {
        int V;
        cin >> V;
 
 
        if ((V & mask) == 0) {
            V |= mask;
        }
 
        cout << V << '\n';
    }
 
    return 0;
}