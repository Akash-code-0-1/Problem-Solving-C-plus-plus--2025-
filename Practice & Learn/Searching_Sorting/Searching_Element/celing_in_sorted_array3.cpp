#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int x)
{
    auto itr = lower_bound(nums.begin(), nums.end(), x); // returns iterator
    int idx = itr - nums.begin();
    return idx;
}

int main()
{
    vector<int> nums = {1, 2, 8, 10, 10, 12, 19};
    int x = 3;
    int result = solve(nums, x);
    cout << nums[result] << endl;
}