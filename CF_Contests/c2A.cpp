#include <bits/stdc++.h>
using namespace std;

int simulate(vector<long long> order, long long c) {
    int n = order.size();
    int coins = 0;

    for (int i = 0; i < n; ++i) {
        // Check if we have to pay to destroy this bag
        if (order[i] > c) coins++;

        // After destroying this, double all remaining bags
        for (int j = i + 1; j < n; ++j) {
            // Prevent overflow by checking
            if (order[j] > (1e9 + 10)) return 1e9;
            order[j] *= 2;
        }
    }

    return coins;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());  // Start with smallest values first

        int minCoins = INT_MAX;

        do {
            minCoins = min(minCoins, simulate(a, c));
        } while (next_permutation(a.begin(), a.end()));

        cout << minCoins << '\n';
    }

    return 0;
}
