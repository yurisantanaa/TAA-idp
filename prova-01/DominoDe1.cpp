#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct Peca{
    int a;
    int b;
} peca;

int main(){
    int p;
    cin >> p;
    queue<Peca> 
    fila;
    for (int i = 0; i < p; i++)
    {
        peca peca;
        cin >> peca.a >> peca.b;
        fila.push(peca);
    }
    while (!fila.empty())
    {
        cout << fila.front().a << " " << fila.front().b << endl;     
        fila.pop();
        if(!fila.empty()){
            if(fila.front().a + fila.front().b == 7){
                fila.push(fila.front());
                fila.pop();
            }
            else fila.pop();
        }
    } 
    return 0;
}