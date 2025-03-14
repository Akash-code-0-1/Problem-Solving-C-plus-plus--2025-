#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums)
{
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[count]);
            count++;
        }
    }
}

int main()
{
    // initializing vector array
    vector<int> nums = {1, 2, 0, 4, 3, 0, 5, 0};

    solve(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
}