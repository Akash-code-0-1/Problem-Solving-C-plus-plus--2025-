#include <bits/stdc++.h>
#include <vector>
using namespace std;

void findMinCoins(int amount, vector<int>& coins) {
    vector<int> result;
    for (int i = 0; i < coins.size(); i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            result.push_back(coins[i]);
        }
    }
    cout << "Coins used: ";
    for (int coin : result) cout << coin << " ";
}

int main() {
    int amount = 49;
    vector<int> coins = {25, 10, 5, 1};
    findMinCoins(amount, coins);
    return 0;
}