#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool verificarOrdemAlfabetica(string s) {
    for (int i = 1; i < s.size(); ++i) {
        if (s.at(i) <= s.at(i-1)) {
            return false;
        }
    }
    return true;
}

string acharString(string s) {
    int n = s.size();
    for (int len = 1; len <= n; ++len) {
        string substring = s.substr(len, n - len);
        if (verificarOrdemAlfabetica(substring)) {
            return substring;
        }
    }
    return "";
}

int main() {
    string s;
    cin >> s;
    string resposta = acharString(s);
    cout << resposta << endl;
    return 0;
}