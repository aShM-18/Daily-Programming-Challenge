#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, amount;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    cin >> amount;
    vector<int> dp(amount+1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (int c : coins) {
            if (i >= c) dp[i] = min(dp[i], dp[i-c] + 1);
        }
    }
    cout << (dp[amount] == 1e9 ? -1 : dp[amount]);
}
