#include <iostream>
#include <vector>
#define int long long
#define MOD 1000000007
using namespace std;

signed main() {
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> dp(x + 1, 0);
	dp[0] = 1;
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (i - a[j] >= 0) {
				dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
			}
		}
	}

	cout << dp[x] << "\n";
	return 0;
}