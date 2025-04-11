#include <iostream>
#include <vector>
using namespace std;
 
string hasPairSum(const vector<int>& C, int S) {
    int left = 0;
    int right = C.size() - 1;
 
    while (left < right) {
        int current_sum = C[left] + C[right];
        if (current_sum == S) {
            return "SIM";
        } else if (current_sum < S) {
            left++;
        } else {
            right--;
        }
    }
    return "NAO";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int N;
        cin >> N;
        vector<int> C(N);
        for (int i = 0; i < N; ++i) {
            cin >> C[i];
        }
        int S;
        cin >> S;
 
        cout << hasPairSum(C, S) << '\n';
    }
 
    return 0;
}