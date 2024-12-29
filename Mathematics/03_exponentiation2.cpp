#include <iostream>
 
using namespace std;
 
const int M = 1e9 + 7;
 
long long binpow(long long a, long long b, long long mod) {
    if (b == 0) {
        return 1;
    }
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    cout << binpow(a, binpow(b, c, M - 1), M) << '\n';
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