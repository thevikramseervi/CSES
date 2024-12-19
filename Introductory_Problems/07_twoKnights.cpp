#include <iostream>
 
using namespace std;
 
using ll = long long;
 
ll sumtill(ll n) { return n * (n + 1) / 2; }
 
void solve(ll n) {
    ll sq = n * n;
    ll s = sq * (sq - 1) / 2;
    ll ans = s - 8 * (sumtill(n - 2));
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("C:/CP/input.txt", "r", stdin);
    freopen("C:/CP/output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        solve(i);
    }
 
    return 0;
}