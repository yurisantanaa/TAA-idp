#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int A, B, Y;
        cin >> A >> B >> Y;
 
        int AB = A | B;
 
        if ((AB & (~Y)) != 0) {
            cout << -1 << '\n';
            continue;
        }
 
        int C = Y & (~AB);
 
        if ((A | B | C) == Y) {
            cout << C << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
 
    return 0;
}