#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int totalSubsetXORSum = 0;
        // Total number of subsets is 2^n, where n is the size of nums
        int totalSubsets = 1 << nums.size();

        for (int i = 0; i < totalSubsets; ++i)
        {
            int subsetXOR = 0;

            for (int j = 0; j < nums.size(); ++j)
            {
                // Check if the j-th element is included in the i-th subset
                if (i & (1 << j))
                {
                    subsetXOR ^= nums[j];
                }
            }

            if (i > 0)
            {
                totalSubsetXORSum += subsetXOR;
            }
        }

        return totalSubsetXORSum;

    }
};

int main()
{
    vector<int> nums = {1, 3};
    Solution sol;
    int result = sol.subsetXORSum(nums);
    cout << result << endl;
    return 0;
}