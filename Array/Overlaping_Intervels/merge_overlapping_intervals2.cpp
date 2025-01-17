#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;

    res.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        vector<int> &start = res.back();
        vector<int> &end = nums[i];

        if (end[0] <= start[1])
        {
            start[1] = max(end[1], start[1]);
        }
        else
            res.push_back(end);
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

// O(n*log(n))