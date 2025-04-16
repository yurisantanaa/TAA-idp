#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

bool pode(const vector<ll>& E, ll H, ll x) {
    ll total = 0;
    for (ll e : E) {
        total += (e + x - 1) / x;
        if (total > H) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    ll H;
    cin >> N >> H;

    vector<ll> E(N);
    ll max_ex = 0;
    for (int i = 0; i < N; ++i) {
        cin >> E[i];
        max_ex = max(max_ex, E[i]);
    }

    ll low = 1, high = max_ex, ans = 1;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (pode(E, H, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
