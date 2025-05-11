#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cafes(n);
    for (int i = 0; i < n; i++) {
        cin >> cafes[i];
    }

    sort(cafes.begin(), cafes.end());

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int q;
        cin >> q;
        
        int count = upper_bound(cafes.begin(), cafes.end(), q) - cafes.begin();
        
        cout << count << endl;
    }
}