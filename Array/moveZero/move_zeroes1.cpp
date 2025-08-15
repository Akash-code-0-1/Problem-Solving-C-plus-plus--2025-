#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] == 0)
        {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {0, 0, 1};
    solve(nums);
}