#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); i++)
    {
        int start = nums[i][0];
        int end = nums[i][1];

        if (!res.empty() && res.back()[1] >= end)
        {
            continue;
        }
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j][0] <= end)
            {
                end = max(end, nums[j][1]);
            }
        }
        res.push_back({start, end});
    }
    return res;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> res = mergeOverlap(arr);

    for (auto interval : res)
        cout << interval[0] << " " << interval[1] << endl;
}


//O(n*2)