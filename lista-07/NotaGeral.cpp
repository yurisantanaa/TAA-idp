#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int a;
    scanf("%d",&a);
    vector<int> notas;
    for (int i = 0; i < a; i++)
    {
        int n;
        scanf("%d",&n);
        notas.push_back(n);
    }
    sort(notas.begin(),notas.end());
    for(int i = 0; i < a; i++)
    {
        printf("%d\n",notas.at(i));
    }
}