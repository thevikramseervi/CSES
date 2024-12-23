#include <iostream>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
 
    if (a < b) {
        swap(a, b);
    }
 
    if (a == 0 && b == 0) {
        cout << "YES\n";
        return;
    }
    if (a == 2 * b) {
        cout << "YES\n";
        return;
    }
    if (a > 2 * b) {
        cout << "NO\n";
        return;
    }
    if (a % 3 == 0 && b % 3 == 0) {
        cout << "YES\n";
        return;
    }
 
    long long diff = a - b;
    a = a - 2 * diff;
    b = b - diff;
 
    if (a == b && a % 3 == 0) {
        cout << "YES\n";
        return;
    }
 
    cout << "NO\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("C:/CP/input.txt", "r", stdin);
    freopen("C:/CP/output.txt", "w", stdout);
#endif
 
    int tt;
    cin >> tt;
 
    for (int i = 0; i < tt; i++) {
        // cout << i + 1 << " : ";
        solve();
    }
 
    return 0;
}