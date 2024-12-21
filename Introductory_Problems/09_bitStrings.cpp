#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    long long ans = 1;
    long long MOD = 1000000007;
 
    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;
    }
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("C:/CP/input.txt", "r", stdin);
    freopen("C:/CP/output.txt", "w", stdout);
#endif
 
    solve();
 
    return 0;
}