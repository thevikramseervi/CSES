#include <bitset>
#include <cmath>
#include <iostream>
 
#define int long long
#define max 16
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int res = pow(2, n);
 
    for (int i = 0; i < res; i++) {
        bitset<max> b(i);
        bitset<max> g(b);
        g[max - 1] = b[max - 1];
        for (int j = max - 2; j >= 0; j--) {
            g[j] = b[j] ^ b[j + 1];
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << g[i];
        }
        cout << '\n';
    }
    cout << '\n';
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("C:/CP/input.txt", "r", stdin);
    freopen("C:/CP/output.txt", "w", stdout);
#endif
 
    int tt = 1;
    // cin >> tt;
 
    while (tt--) {
        solve();
    }
 
    return 0;
}