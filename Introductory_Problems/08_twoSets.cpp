#include <iostream>
#include <vector>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n;
    cin >> n;
 
    ll sum = n * (n + 1) / 2;
 
    if (sum % 2 != 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
 
    vector<ll> a(n + 1, 0);
    ll subsum = sum / 2;
    ll reqsum = subsum;
    ll cnt = 0;
 
    for (ll i = n; i >= 1 && reqsum > 0; i--) {
        if (reqsum < i) {
            a[reqsum] = 1;
            cnt++;
            break;
        }
        a[i] = 1;
        reqsum -= i;
        cnt++;
    }
 
    cout << cnt << "\n";
    for (ll i = 1; i <= n; i++) {
        if (a[i] == 1) {
            cout << i << " ";
        }
    }
    cout << "\n";
 
    cout << n - cnt << "\n";
    for (ll i = 1; i <= n; i++) {
        if (a[i] == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
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