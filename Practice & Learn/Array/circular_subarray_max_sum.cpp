// 👉 Problem: Maximum sum subarray when array is circular.
// Example:
// nums = [5, -3, 5]
// Normal Kadane → max = 7 ([5, -3, 5])
// But circular wrap → [5, 5] = 10

// Idea:

// Two cases:

// Normal case → Kadane’s max subarray.

// Circular case → Total sum – Kadane’s min subarray (subarray we remove).

// Time Complexity:

// Kadane (max) + Kadane (min) = O(n)

// Total: O(n)

// ✅ Use when array is circular (wrap-around subarray allowed).


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

int circularMaxSubarray(vector<int> &nums)
{
    int normal_max = kadanesMaxSubarray(nums);
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    int minSub = kadanesMinSubarray(nums);

    if (total_sum < 0)
        return normal_max;

    return max(normal_max, total_sum - minSub);
}

int main()
{
    vector<int> nums = {5, -3, 5};
    cout << circularMaxSubarray(nums) << endl;
}