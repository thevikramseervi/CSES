#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    long long ans = 0, prev = -1;
 
    for (long long i = 5; prev != ans; i *= 5) {
        prev = ans;
        ans = ans + n / i;
    }
    cout << ans << '\n';
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