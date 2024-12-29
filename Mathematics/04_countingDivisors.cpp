#include <cmath>
#include <iostream>
#define MAX 1000005
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("C:/CP/input.txt", "r", stdin);
    freopen("C:/CP/output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
 
    while (n--) {
        int x;
        cin >> x;
        int cnt = 0;
        for (int i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
                cnt += 2;
            }
            if (i == sqrt(x)) {
                cnt--;
            }
        }
        cout << cnt << '\n';
    }
 
    return 0;
}