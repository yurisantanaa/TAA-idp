#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        long long X, Y;
        cin >> X >> Y;
        long long diff = X ^ Y;
        int distance = __builtin_popcountll(diff);
        cout << distance << '\n';
    }
 
    return 0;
}