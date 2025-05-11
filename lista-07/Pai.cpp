#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n >> c;
    vector<int> arvore;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        arvore.push_back(no);
    }
    for (int i = 0; i < c; i++)
    {
        int no;
        cin >> no;

        int pai = arvore.at(no/2);
    }    
}