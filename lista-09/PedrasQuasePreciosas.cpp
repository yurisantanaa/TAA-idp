#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string P, C;
        cin >> P >> C;
        
        unordered_set<char> pedras;
        for (char pedra : C) {
            pedras.insert(pedra);
        }
        
        int count = 0;
        for (char pedra : P) {
            if (pedras.count(pedra)) { 
                count++;
            }
        }
        
        cout << "Contem " << count << " pedras negociaveis" << endl;
    }
    
    return 0;
}