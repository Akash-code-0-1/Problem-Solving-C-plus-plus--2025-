#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, int left, int right)
{

    if (left >= right)
    {
        return;
    }

    swap(nums[left], nums[right]);

    solve(nums, left + 1, right - 1);
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9};

    solve(nums, 0, nums.size() - 1);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}