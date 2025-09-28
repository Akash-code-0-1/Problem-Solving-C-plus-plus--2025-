#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kadanesMaxSubarray(vector<int> &nums)
    {
        int current_max = nums[0];
        int global_max = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            current_max = max(nums[i], current_max + nums[i]);
            global_max = max(current_max, global_max);
        }
        return global_max;
    }

    int kadanesMinSubarray(vector<int> &nums)
    {
        int current_min = nums[0];
        int global_min = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            current_min = min(nums[i], current_min + nums[i]);
            global_min = min(current_min, global_min);
        }
        return global_min;
    }
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int normal_max = kadanesMaxSubarray(nums);
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int minSub = kadanesMinSubarray(nums);

        if (total_sum == minSub)
            return normal_max;

        return max(normal_max, total_sum - minSub);
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, -2, 3, -2};
    cout << solution.maxSubarraySumCircular(nums) << endl;

    nums = {5, -3, 5};
    cout << solution.maxSubarraySumCircular(nums) << endl;

    nums = {-3, -2, -3};
    cout << solution.maxSubarraySumCircular(nums) << endl;

    return 0;
}