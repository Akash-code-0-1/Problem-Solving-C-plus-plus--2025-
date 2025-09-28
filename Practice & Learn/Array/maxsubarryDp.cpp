// 👉 Kadane is already a form of DP, but you can also store results in an array:

// dp[i] = max(nums[i], dp[i-1] + nums[i])
// Answer = max(dp[i])

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayDP(vector<int> &nums)
{
    vector<int> dp(nums.size());
    dp[0] = nums[0];
    int result = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        dp[i] = max(nums[i], dp[i - 1] + nums[i]);
        result = max(result, dp[i]);
    }
    return result;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarrayDP(nums) << endl;
}
