#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int left = 0, sum = 0, minLength = INT_MAX;

        for (int right = 0; right < nums.size(); right++)
        {
            sum += nums[right];

            while (sum >= target)
            {
                minLength = min(minLength, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return (minLength == INT_MAX) ? 0 : minLength;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << "Minimum subarray length: " << solution.minSubArrayLen(target, nums) << endl;
    return 0;
}
