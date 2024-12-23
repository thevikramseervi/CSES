#include <deque>
#include <iostream>
#include <map>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int n = s.length();
    if (n == 1) {
        cout << s << '\n';
        return;
    }
 
    map<char, int> m;
    for (char x : s) {
        m[x]++;
    }
 
    int cnt = 0;
    for (auto x : m) {
        if (cnt == 2) {
            break;
        }
        if (x.second % 2 != 0) {
            cnt++;
        }
    }
 
    if (cnt == 2) {
        cout << "NO SOLUTION\n";
        return;
    }
 
    if (n % 2 == 0 && cnt == 1) {
        cout << "NO SOLUTION\n";
        return;
    }
 
    char middle = '\0';
 
    deque<char> q;
    for (auto x : m) {
        if (x.second % 2 != 0) {
            int r = (x.second - 1) / 2;
            middle = x.first;
            for (int i = 0; i < r; i++) {
                q.push_front(x.first);
                q.push_back(x.first);
            }
        }
        if (x.second % 2 == 0) {
            int r = x.second / 2;
            for (int i = 0; i < r; i++) {
                q.push_front(x.first);
                q.push_back(x.first);
            }
        }
    }
 
    if (n % 2 == 0) {
        for (char x : q) {
            cout << x;
        }
        cout << '\n';
        return;
    }
 
    for (int i = 0; i < n / 2; i++) {
        cout << q[i];
    }
    cout << middle;
    for (int i = n / 2; i < n - 1; i++) {
        cout << q[i];
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