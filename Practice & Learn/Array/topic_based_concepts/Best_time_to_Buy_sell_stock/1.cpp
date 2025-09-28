#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxprofit = 0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            maxprofit = max(maxprofit, prices[j] - prices[i]);
        }
    }
    return maxprofit;
}

int main()
{
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfit(prices) << endl;
}

// O(n*n)