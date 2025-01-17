#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int m)
{
    int min_diff = INT_MAX;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - m - 1; i++)
    {
        int temp_min_diff = nums[i + m - 1] - nums[i];
        if (temp_min_diff < min_diff)
        {
            min_diff = temp_min_diff;
        }
    }
    return min_diff;
}

int main()
{
    vector<int> nums = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    int min_diff = solve(nums, m);
    cout << min_diff << endl;
}