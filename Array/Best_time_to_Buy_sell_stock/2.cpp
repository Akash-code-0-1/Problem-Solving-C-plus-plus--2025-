#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxprofit = 0;
    int buy = prices[0];
    for (int i = 0; i < prices.size() - 1; i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
        }
        if (maxprofit < prices[i] - buy)
        {
            maxprofit = prices[i] - buy;
        }
    }
    return maxprofit;
}

int main()
{
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfit(prices) << endl;
}

// O(n)