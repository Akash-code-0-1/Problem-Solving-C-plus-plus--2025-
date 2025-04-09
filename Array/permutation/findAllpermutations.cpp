#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverse(vector<int> &nums, int start, int end)
    {
        while (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    void sort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }

    bool nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }

        if (i < 0)
            return false;

        int j = n - 1;
        while (nums[j] <= nums[i])
        {
            j--;
        }

        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;

        reverse(nums, i + 1, n - 1);

        return true;
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;

        sort(nums); // ensure we start from the smallest permutation

        res.push_back(nums);
        while (nextPermutation(nums))
        {
            res.push_back(nums);
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = sol.permute(nums);

    for (const auto &perm : permutations)
    {
        for (int num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
