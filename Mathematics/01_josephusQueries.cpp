#include <iostream>
#define int long long
using namespace std;
 
int fn(int n, int k) {
    if (n == 1) {
        return 1;
    }
 
    if (k <= (n + 1) / 2) {
        if (2 * k > n) {
            return 2 * k % n;
        } else {
            return 2 * k;
        }
    }
 
    int ans = fn(n / 2, k - (n + 1) / 2);
 
    if (n % 2 == 1) {
        return 2 * ans + 1;
    } else {
        return 2 * ans - 1;
    }
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    int ans = fn(n, k);
 
    cout << ans << '\n';
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("C:/CP/input.txt", "r", stdin);
    freopen("C:/CP/output.txt", "w", stdout);
#endif
 
    int tt;
    cin >> tt;
 
    while (tt--) {
        solve();
    }
 
    return 0;
}