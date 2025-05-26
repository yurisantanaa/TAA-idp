#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool saoAnagramas(const string &R, const string &S) {
    if (R.size() != S.size()) {
        return false;
    }
    
    unordered_map<char, int> contagemR, contagemS;
    
    for (char c : R) {
        contagemR[c]++;
    }
    
    for (char c : S) {
        contagemS[c]++;
    }
    
    return contagemR == contagemS;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    
    while (T--) {
        string R, S;
        cin >> R >> S;
        
        if (saoAnagramas(R, S)) {
            cout << "ANAGRAMAS" << endl;
        } else {
            cout << "DIFERENTES" << endl;
        }
    }
    
    return 0;
}