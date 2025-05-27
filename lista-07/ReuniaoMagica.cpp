#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

void verificarBaralho(const string& a, const string& b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        verificarBaralho(a, b);
    }
}

void verificarBaralho(const string& a, const string& b)
{
    unordered_set<char> setB(b.begin(), b.end());
    vector<char> iguais;
    
    for (char c : a)
    {
        if (setB.count(c) && find(iguais.begin(), iguais.end(), c) == iguais.end())
        {
            iguais.push_back(c);
        }
    }
    
    if (iguais.empty())
    {
        cout << "Baralhos prontos para o duelo";
    }
    else
    {
        sort(iguais.begin(), iguais.end());
        for(char i : iguais)
        {
            cout << i;
        }
    }
    cout << '\n';
}