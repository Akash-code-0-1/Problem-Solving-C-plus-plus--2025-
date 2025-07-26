#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    set<vector<int>> uniqueQuadruplets;

    for (int i = 0; i < nums.size() - 3; i++)
    {
        for (int j = i + 1; j < nums.size() - 2; j++)
        {
            for (int k = j + 1; k < nums.size() - 1; k++)
            {
                for (int l = k + 1; l < nums.size(); l++)
                {
                    if ((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l] == target)
                    {
                        uniqueQuadruplets.insert({nums[i], nums[j], nums[k], nums[l]});
                    }
                }
            }
        }
    }
    for (const auto &quad : uniqueQuadruplets)
    {
        result.push_back(quad);
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    for (const auto &quad : result)
    {
        cout << "[";
        for (const auto &num : quad)
        {
            cout << num << " ";
        }
        cout << "]\n";
    }
}