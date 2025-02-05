#include <iostream>
#include <vector>
#define int long long
#define MOD 1000000007
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> dp(n + 1);
    // dp[i] = number of ways to make a sum of i

	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i - j >= 0) {
				dp[i] = (dp[i] +  dp[i - j]) % MOD;
			}
		}
	}

	cout << dp[n] << "\n";
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