#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    int res = nums[0];
    int maxends = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        maxends = max(maxends + nums[i], nums[i]);
        res = max(res, maxends);
    }
    return res;
}

int main()
{
    vector<int> nums = {2, 3, -8, 7, -1, 2, 3};
    int max_sum = solve(nums);
    cout << max_sum << endl;
}