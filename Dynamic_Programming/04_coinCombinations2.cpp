#include <iostream>
#include <vector>
#define MOD 1000000007

void solve() {
    int n, amount;
    std::cin >> n >> amount;

    std::vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        std::cin >> coins[i];
    }

    std::vector<std::vector<int>> dp(n, std::vector<int>(amount + 1));
    // State: dp[i][j] = no of ways to construct sum j using coins[i....n-1]
    // Transition: dp[i][j] = dp[i][sum-coins[i]] + dp[i+1][sum]

    // Base case: no of ways to construct sum 0 using any coins = 1
    for (int i = 0; i < n; i++) {
        dp[i][0] = 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int sum = 1; sum <= amount; sum++) {
            int picking = (sum - coins[i] >= 0) ? dp[i][sum - coins[i]] : 0;
            int skipping = (i + 1 < n) ? dp[i + 1][sum] : 0;
            dp[i][sum] = (picking + skipping) % MOD;
        }
    }

    // Final subproblem: no of ways to construct amount using coins[0....n-1]
    std::cout << dp[0][amount] << '\n';
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    solve();
}
