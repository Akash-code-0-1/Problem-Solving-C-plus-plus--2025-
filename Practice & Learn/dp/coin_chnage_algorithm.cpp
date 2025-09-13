#include <bits/stdc++.h>
using namespace std;

/*
Coin Change Problem (DP)
------------------------------------
dp[i] = minimum coins required to make sum = i

Transition:
dp[i] = min(dp[i], dp[i - coin] + 1) for each coin <= i

Base case:
dp[0] = 0   // 0 coins needed to make sum 0
*/


int coinChange(vector<int>& coins, int amount) {
    const int INF = 1e9; // Large value as "infinity"
    vector<int> dp(amount + 1, INF);

    dp[0] = 0; // Base case

    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i - coin >= 0) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return (dp[amount] == INF) ? -1 : dp[amount];
}



int main() {
    // Demo input
    int n = 3;
    vector<int> coins = {1, 3, 4};
    int amount = 6;

    cout << "Coins: ";
    for (int c : coins) cout << c << " ";
    cout << "\nTarget Amount: " << amount << "\n";

    // Solve
    int result = coinChange(coins, amount);

    // Output
    if (result == -1)
        cout << "It is not possible to make the amount.\n";
    else
        cout << "Minimum coins needed = " << result << "\n";

    return 0;
}



