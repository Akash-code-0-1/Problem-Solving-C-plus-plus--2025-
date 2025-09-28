// Find the maximum sum of a contiguous subarray in a given array with Kadane’s Algorithm
#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << kadanesMaxSubarray(nums) << endl;
}