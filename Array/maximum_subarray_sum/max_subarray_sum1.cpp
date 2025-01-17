#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    int res = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        int cs = 0;
        for (int j = i; j < nums.size(); j++)
        {
            cs += nums[j];
            res = max(cs, res);
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {2, 3, -8, 7, -1, 2, 3};
    int max_sum = solve(nums);
    cout << max_sum << endl;
}