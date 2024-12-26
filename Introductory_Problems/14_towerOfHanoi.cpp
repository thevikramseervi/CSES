#include <cmath>
#include <iostream>
#define int long long
using namespace std;
 
void toh(int n, const int left, const int right, const int mid) {
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        cout << left << " " << right << '\n';
        return;
    }
    toh(n - 1, left, mid, right);
    cout << left << " " << right << '\n';
    toh(n - 1, mid, right, left);
}
 
void solve() {
    int n;
    cin >> n;
 
    cout << pow(2, n) - 1 << '\n';
 
    toh(n, 1, 3, 2);
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