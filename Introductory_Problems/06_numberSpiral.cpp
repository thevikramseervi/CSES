#include <iostream>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    ll r, c, ans = 0;
    cin >> r >> c;
 
    if (r == c) {
        ans = r * r - r + 1;
    } else if (r > c) {
        if (r % 2 == 0) {
            ans = r * r - c + 1;
        } else {
            ans = (r - 1) * (r - 1) + c;
        }
    } else {
        if (c % 2 != 0) {
            ans = c * c - r + 1;
        } else {
            ans = (c - 1) * (c - 1) + r;
        }
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
 
    int tt = 1;
    cin >> tt;
 
    while (tt--) {
        solve();
    }
 
    return 0;
}