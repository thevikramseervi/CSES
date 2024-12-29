#include <iostream>
using namespace std;
 
long long binpow(long long base, long long expo, long long mod) {
    if (expo == 0) {
        return 1;
    }
    base %= mod;
    long long res = 1;
    while (expo > 0) {
        if (expo & 1) {           // equivalent to if (expo % 2 == 1)
            res = res * base % mod;
        }
        base = base * base % mod; // note: base *= base % mod is wrong
        expo >>= 1;               // equivalent to expo = expo / 2;
    }
    return res;
}
 
void solve() {
    long long a, b, mod = 1e9 + 7;
    cin >> a >> b;
 
    cout << binpow(a, b, mod) << '\n';
}
 
signed main() {
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