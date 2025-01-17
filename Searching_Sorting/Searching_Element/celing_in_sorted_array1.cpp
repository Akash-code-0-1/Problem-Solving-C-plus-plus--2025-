#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int x)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (x <= nums[i])
        {
            return i;
        }
        if (nums[i] < x && nums[i + 1] >= x)
        {
            return i + 1;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 8, 10, 10, 12, 19};
    int x = 3;
    int result = solve(nums, x);
    cout << nums[result] << endl;
}