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
        int filhos[2];
        
        if(n == 1){
            cout << "NULL" << " " << "NULL" << endl; 
            return 0;
        }
        
        filhos[0] = arvore.at((2*no)-1);
        filhos[1] = arvore.at((2*no));

        
        if(filhos[0] == -1 && filhos[1] == -1){
            cout << "NULL" << " " << "NULL" << endl; 
        }
        else if(filhos[0] == -1){
            cout << "NULL" << " " << filhos[1] << endl; 
        }
        else if(filhos[1] == -1){
            cout << filhos[0] << " " << "NULL" << endl; 
        }
        else{
            cout << filhos[0] << " " << filhos[1] << endl; 
        }
    }    
}